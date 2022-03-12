#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n, s = 0;
        cin >> n;
        int a[n];
        for (int &x : a){
            cin >> x;
            s += x;
        }
        if (s & 1)
            cout << "NO\n";
        else {
            s /= 2;
            int F[s + 1] = {0};
            F[0] = 1;
            for (int i = 0; i < n; i ++){
                for (int j = s; j >= a[i]; j --){
                    if (F[j - a[i]] == 1)
                        F[j] = 1;
                }
            }
            if (F[s] == 1)  cout << "YES\n";
            else  cout << "NO\n";
        }
    }

}