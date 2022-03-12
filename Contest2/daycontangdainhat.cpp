#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

int main (){
    int n;
    cin >>n;
    int a[n], dp[n], ans = 0;
    for (int i = 0; i < n; i ++){
        cin >> a[i];
        dp[i] = 1;
        for (int j = 0; j < i; j ++){
            if (a[i] > a[j] && dp[i] <= dp[j]){
                dp[i] = dp[j] + 1;
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
}