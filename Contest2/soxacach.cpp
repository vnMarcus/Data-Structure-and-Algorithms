#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

int n, ckeck[15];

void Try(string s){
    if (s.size() == n){
        cout << s << endl;
    }
    for (int i = 1; i <= n; i ++){
        if (s.size() == 0 || (!ckeck[i] && abs(s[s.size() - 1] - '0' - i) != 1)){
            ckeck[i] = 1;
            Try(s + to_string(i));
            ckeck[i] = 0;
        }
    }
}


int main (){
    int t;
    cin >> t;
    while (t --){
        cin >> n;
        Try("");
    }

}