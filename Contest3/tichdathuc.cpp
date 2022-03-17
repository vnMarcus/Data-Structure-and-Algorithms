#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n, m;
        cin >> n >> m;
        int p[n], q[m];
        for (int &x : p)    cin >> x;
        for (int &x : q)    cin >> x;
        int res[n + m + 1];
        memset(res, 0, sizeof(res));
        for (int i = 0; i < n; i ++){
            for (int j = 0; j < m; j ++){
                res[i + j] += p[i] * q[j];
            }
        }
        for (int i = 0; i < n + m - 1;i ++)
            cout << res[i] << " ";
        cout << endl;
    }

}