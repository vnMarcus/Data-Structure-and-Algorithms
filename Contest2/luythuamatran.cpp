#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;


struct matrix{
    ll x[10][10];
};
int n;

matrix operator*(matrix a, matrix b){
    matrix c;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            c.x[i][j] = 0;
            for (int k = 0; k < n; k ++){
                c.x[i][j] = (c.x[i][j] + (a.x[i][k] * b.x[k][j]) % MOD) % MOD;
            }
        }
    }
    return c;
}

matrix powMod(matrix a, int b){
    if (b == 1) return a;
    matrix tmp = powMod(a, b / 2);
    if (b % 2 == 0)     return  tmp * tmp;
    return a * tmp * tmp;
}




int main (){
    int t;
    cin >> t;
    while (t --){
        int  k;
        
        cin >> n >> k;
        matrix a;
        for (int i = 0; i < n; i ++){
            for (int j = 0; j < n; j ++){
                cin >> a.x[i][j];
            }
        }
        matrix result = powMod(a, k);
        ll s = 0;
        for (int i = 0; i < n; i ++)
            s = (s + result.x[i][n - 1]) % MOD;
        cout << s << endl;
    }

}