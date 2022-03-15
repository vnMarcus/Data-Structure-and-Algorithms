#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    int b[n + 1][n + 1];
    vector<vector<int>> ans;
    for (int i = 1; i <= n; i++)
        a[i] = i;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> b[i][j];
    while (1)
    {
        int x = 0;
        for (int i = 1; i <= n; i++)
            x += b[i][a[i]];
        if (x == k)
            ans.push_back(a);
        int i = n - 1;
        while (a[i] > a[i + 1] && i > 0)
            i--;
        if (i == 0)
            break;
        else
        {
            int k = n;
            while (a[k] < a[i])
                k--;
            swap(a[i], a[k]);
            int l = i + 1, r = n;
            while (l < r)
            {
                swap(a[l], a[r]);
                l++;
                r--;
            }
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i ++){
        for (int j = 1; j < ans[i].size(); j ++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}