// #include <bits/stdc++.h>

// using namespace std;
// typedef long long ll;
// int MOD = 1e9 + 7;

// int main (){
//     int t;
//     cin >> t;
//     while (t --){
//         int n;
//         cin >> n;
//         int x, ans = 0, s = 0;
//         for (int i = 0; i < n; i ++){
//             cin >> x;
//             s += x;
//             ans = max(ans, s);
//             if (s < 0){
//                 s = 0;
//             }
//         }
//         cout << ans << endl;
//     }

// }


#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;


ll sum_left(ll a[], ll i, ll j){
    ll sum = 0;
    ll Max2 = INT_MIN;
    for (ll k = j; k >= i; k --){
        sum += a[k];
        if (sum > Max2) Max2 = sum;
    }
    return Max2;
}

ll sum_right(ll a[], ll i, ll j) {
    ll sum = 0;
    ll Max1 = INT_MIN;
    for(ll k = i; k <= j; k++) {
        sum += a[k];
        if(sum > Max1) Max1 = sum;
    }
    return Max1;
}

ll searching(ll a[], ll low, ll high){
    if (low == high)    return a[low];
    ll mid = (low + high) / 2;
    ll tmp1 = sum_left(a, low, mid);
    ll tmp2 = sum_right(a, mid + 1, high);
    ll tmp3 = tmp1 + tmp2;
    return max( max(searching(a, low, mid), searching(a, mid+1, high)),tmp3);
}




int main (){
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        ll a[n];
        for (ll &x : a) cin >> x;
        cout << searching(a, 0, n - 1) << endl;
    }

}