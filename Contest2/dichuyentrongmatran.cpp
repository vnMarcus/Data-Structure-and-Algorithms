#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, m;
int a[150][150];

int cnt = 0;
void Try(int i, int j){
    if (i == n && j == m){
        cnt ++;
        return;
    }
    else {
        if (i < n)
            Try(i + 1, j);
        if (j < m)
            Try(i, j + 1);
    }
}

int main (){
    int t;
    cin >> t;
    while (t --){
        cin >> n >> m;
        for (int i = 1; i <= n; i ++)
            for (int j = 1; j <= m; j ++)
                cin >> a[i][j];
        cnt = 0;
        Try(1,1);
        cout << cnt << endl;
    }

}