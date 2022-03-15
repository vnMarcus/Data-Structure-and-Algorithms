#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
string s = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int x[100], n, k;

void out(){
    for (int i = 1; i <= k; i ++){
        cout << s[x[i]];
    }
    cout << endl;
}

void Try(int i){
    for (int j = x[i - 1] + 1; j <= n - k + i; j ++){
        x[i] = j;
        if (i == k)
            out();
        else {
            Try(i + 1);
        }
    }
}




int main (){
    int t;
    cin >> t;
    while (t --){
        cin >> n >> k;
        Try(1);
    }

}