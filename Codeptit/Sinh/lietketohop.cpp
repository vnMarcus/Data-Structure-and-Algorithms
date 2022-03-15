#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int n, k, x;
    cin >> n >> k;
    int a[k + 1];
    vector<int> v;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    v.push_back(0);
    for (auto it : mp)
    {
        v.push_back(it.first);
    }
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
    n = v.size() - 1;
    while (1)
    {
        for (int i = 1; i <= k; i++)
            cout << v[a[i]] << " ";
        cout << endl;
        int i = k;
        while (a[i] == n - k + i && i > 0)
            i--;
        if (i == 0)
            break;
        else
        {
            a[i]++;
            for (int j = i + 1; j <= k; j++)
            {
                a[j] = a[i] + j - i;
            }
        }
    }
}