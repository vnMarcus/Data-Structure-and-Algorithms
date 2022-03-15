#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 1], b[n + 1];
        map<int, int> mp;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            mp[a[i]] ++;
        }
        int cnt = 0;
        int i = k;
        while (a[i] == n - k + i && i > 0)
            i--;
        if (i == 0)
        {
            cnt = k;
        }
        else
        {  
            a[i]++;
            for (int j = i + 1; j <= k; j++)
                a[j] = a[i] + j - i;
            for (int i = 1; i <= k; i ++){
                if (mp[a[i]] == 0)
                    cnt ++;
            }
            
        }
        cout << cnt << endl;
    }
}