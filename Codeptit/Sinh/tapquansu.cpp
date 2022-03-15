#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[k + 1];
        map<int, int> mp;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int result = 0;
        int ckeck = 1;
        int i = k;
        while (a[i] == n - k + i && i > 0)
            i--;
        if (i == 0)
        {
            result = k;
        }
        else
        {
            a[i]++;
            for (int j = i + 1; j <= k; j++)
            {
                a[j] = a[i] + j - i;
            }
            for (int j = 1; j <= k; j++)
            {
                if (mp[a[j]] == 0)
                    result++;
            }
        }
        cout << result << endl;
    }
}