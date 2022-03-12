// #include <bits/stdc++.h>

// using namespace std;
// typedef long long ll;
// int MOD = 1e9 + 7;

// int main (){
//     int t;
//     cin >> t;
//     while (t --){
//         ll n, k;
//         cin >> n >> k;
//         ll a[n];
//         ll res = -1;
//         ll tmp = -3;
//         int cnt = 0;
//         map<ll, int> mp;
//         for (ll &x : a){
//             cin >> x;
//             mp[x] = cnt ++;
//             if (x <= k)
//                 tmp = x;
//             res = max(res, tmp);
//         }
//         if (res == -1)
//             cout << -1 << endl;
//         else
//             cout << mp[res] + 1 << endl;
//     }

// }