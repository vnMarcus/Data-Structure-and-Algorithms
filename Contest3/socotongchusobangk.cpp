#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;
ll t, n, k, dp[101][50005];
int main (){
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= 9; i ++)   dp[1][i] = 1;
    for (int i = 2; i <= 100; i ++){
        for (int tmp = 0; tmp <= 9; tmp ++){
            for (int j = tmp; j <= 50000; j ++){
                dp[i][j] = (dp[i][j] + dp[i - 1][j - tmp]) % MOD;
            }
        }
    }
    cin >> t;
    while (t --){
        cin >> n >> k;
        cout << dp[n][k] << endl;
    }
}