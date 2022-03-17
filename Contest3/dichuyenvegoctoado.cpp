#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

int main()
{
    ll dp[30][30];
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        dp[0][0] = 0;
        for (int i = 1; i <= m; i++)
            dp[0][i] = 1;
        for (int i = 1; i <= n; i++)
            dp[i][0] = 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
        cout << dp[n][m] << endl;
    }
}