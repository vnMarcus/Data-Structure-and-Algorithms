#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        int a[n][n];
        for (int i = 0; i < n; i ++)    cin >> a[0][i];
        cout << "[";
        for (int i = 0; i < n; i ++) {
            if (i != n - 1)
                cout << a[0][i] << " ";
            else 
                cout << a[0][i];
        }
        cout << "]" <<endl;
        for (int i = 1; i < n; i ++){
            for (int j = 0; j < n - i; j ++){
                a[i][j] = a[i - 1][j] + a[i - 1][j + 1] ;
            }
        }
        for (int i = 1; i < n; i ++){
            cout << "[";
            for (int j = 0; j < n - i; j ++){
                if (j != n - i - 1)
                    cout << a[i][j] << " ";
                else 
                    cout << a[i][j];
            }
            cout << "]" <<endl;
        }
    }

}