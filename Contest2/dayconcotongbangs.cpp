#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n, s;
        cin >> n >> s;
        int x, dp[40005] = {0};
        dp[0] = 1;
        for (int i = 1; i <= n; i ++){
            cin >> x;
            dp[x] = 1;
            for (int j = s; j >= x; j --){
                if (dp[j] == 0 && dp[j - x] == 1)
                    dp[j] = 1;
            }
        }
        if (dp[s] == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}