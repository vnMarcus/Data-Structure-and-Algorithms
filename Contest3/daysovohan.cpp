#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

struct Matrix {
    ll f[2][2];
};

Matrix operator* (Matrix a, Matrix b){
    Matrix c;
    for (int i = 0; i < 2; i ++){
        for (int j = 0; j < 2; j ++){
            c.f[i][j] = 0;
            for (int k = 0 ;k < 2; k ++){
                c.f[i][j] = (c.f[i][j] + (a.f[i][k] * b.f[j][k]) % MOD) % MOD; 
            }
        }
    }
    return c;
}

Matrix powMod(Matrix A, int n)
{
    if(n == 1) return A;
    Matrix tmp = powMod(A, n/2);
    if(n % 2 == 0) return tmp * tmp;
    return A * tmp * tmp;
}

int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        Matrix A;
        A.f[0][0]=1; A.f[0][1]=1; A.f[1][0]=1; A.f[1][1]=0;
        Matrix result = powMod(A, n);
        cout << result.f[0][1] << endl;
    }

}