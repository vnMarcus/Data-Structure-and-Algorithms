#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        ll dp[n +2];
        dp[0] = 0;
        for (int i = 1; i <= n; i ++){
            dp[i] = i;
            for (int j = 1; j <= sqrt(i); j ++){
                int tmp = j * j;
                if (tmp > i)    break;
                else dp[i] = min(dp[i], dp[i - tmp] + 1);
            }
        }
        cout << dp[n] << endl;
    }

}