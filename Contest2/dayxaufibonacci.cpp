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
        ll a[n + 1];
        a[1] = 1;
        a[2] = 1;
        for (int i =3 ; i <= n; i ++)
            a[i] = a[i - 1] + a[i - 2];
        while (n > 2){
            if (k <= a[n - 2]) n -=2;
            else {
                k -= a[n - 2];
                n -=1;
            }
        }
        if (n == 1)
            cout << "A\n";
        else cout << "B\n";
    }

}