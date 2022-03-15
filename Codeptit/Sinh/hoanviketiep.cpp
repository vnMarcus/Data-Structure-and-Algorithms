#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i = n - 1, k = n;
        int x[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> x[i];
        while (x[i] > x[i + 1] && i > 0)
            i--;
        if (i == 0)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << j << " ";
            }
        }
        else
        {
            while (x[k] < x[i])
                k--;
            swap(x[k], x[i]);
            int l = i + 1, r = n;
            while (l < r)
            {
                swap(x[l], x[r]);
                l++;
                r--;
            }
            for (int i = 1; i <= n; i++)
            {
                cout << x[i] << " ";
            }
        }
        cout << endl;
    }
}