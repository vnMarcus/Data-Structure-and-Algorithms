#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            a[i] = (1 << (i - 1));
        }
        for (int i = n; i >= 1; i--)
        {
            if (k == a[i])
            {
                cout << char(i + 'A' - 1) << endl;
                break;
            }
            else if (k > a[i])
                k -= a[i];
        }
    }
}