#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

int main (){
    int t;
    cin >> t;
    while (t --){
        ll n, k;
        cin >> n >> k;
        if (k > n) cout << "0\n";
        else {
            ll res = 1;
            for (int i = k - 1; i >= 0; i --){
                res *= (n - i);
                res %= MOD;
            }
            cout << res << endl;
        }  
    }

}