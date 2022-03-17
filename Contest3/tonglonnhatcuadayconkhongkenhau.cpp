#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;


int solve(int a[], int n){
    int inc = a[0];
    int exc = 0;
    int exc_new;
    for (int i = 1; i < n; i ++){
        exc_new = max(exc, inc);
        inc = exc + a[i];
        exc = exc_new;
    }
    return max(exc, inc);
}


int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)    cin >> x;
        cout << solve(a, n) << endl;
    }

}