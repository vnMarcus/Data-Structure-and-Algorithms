#include <bits/stdc++.h>
using namespace std;
int n, a[101], dp1[101], dp2[101];
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            dp1[i] = a[i];
            dp2[i] = a[i];
        }
        for (int i = 1; i < n; i++)
            for (int j = 0; j < i; j++)
                if (a[i] > a[j])
                    dp1[i] = max(dp1[i], dp1[j] + a[i]);
        for (int i = n - 2; i >= 0; i--)
            for (int j = n - 1; j > i; j--)
                if (a[i] > a[j])
                    dp2[i] = max(dp2[i], dp2[j] + a[i]);
        int max_sum = INT_MIN;
        for (int i = 0; i < n; i++)
            max_sum = max(max_sum, (dp1[i] + dp2[i] - a[i]));
        cout << max_sum << endl;
    }
}