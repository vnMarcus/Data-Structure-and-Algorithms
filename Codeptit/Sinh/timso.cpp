#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        queue<ll> q;
        q.push(9);
        while (q.size()){
            ll tmp = q.front();
            q.pop();
            if (tmp % n == 0){
                cout << tmp << endl;
                break;
            }
            q.push(tmp * 10);
            q.push(tmp * 10 + 9);
        }
    }

}