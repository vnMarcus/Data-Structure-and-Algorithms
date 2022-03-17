#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll load(ll x, vector<int> a)
{
    ll t = 0, tmp = 0, dem = 0;
    int p = a.size();
    while (x > 1)
    {
        t = t * 2 + 1;
        if (t + 1 > x)
        {
            x -= (t - 1) / 2 + 1;
            t = 0;
            dem += tmp + a[--p];
            tmp = 0;
            p = a.size();
            continue;
        }
        tmp = (tmp * 2) + a[--p];
        if (x == t + 1)
            return dem + tmp + a[--p];
    }
    if (x == 1)
        dem++;
    return dem;
}
int main()
{
    int z;
    cin >> z;
    while (z--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        vector<int> a;
        while (n)
        {
            a.push_back(n % 2);
            n /= 2;
        }
        cout << load(y, a) - load(x - 1, a) << "\n";
    }
}