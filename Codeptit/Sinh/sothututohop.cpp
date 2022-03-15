#include <bits/stdc++.h>
using namespace std;
int t, n, k;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[k + 1], b[k + 1], dem = 0;
        for (int i = 1; i <= k; ++i)
            cin >> b[i];
        for (int i = 1; i <= k; ++i)
            a[i] = i;
        while (1)
        {
            int i = k, ok = 0;
            while (a[i] >= n + i - k)
                --i;
            if (i == 0)
                break;
            else
            {
                ++dem;
                ++a[i];
                for (int j = i + 1; j <= k; ++j)
                    a[j] = a[j - 1] + 1;
                for (int j = 1; j <= k; ++j)
                    if (a[j] != b[j])
                        ok = 1;
            }
            if (!ok)
            {
                cout << dem + 1 << endl;
                break;
            }
        }
    }
}