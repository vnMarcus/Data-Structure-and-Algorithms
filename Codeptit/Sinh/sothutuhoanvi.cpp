#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        vector<int> v(n + 1);
        vector<vector<int>> vt;
        vector<int> c(n + 1);
        for (int i = 1; i <= n; i ++){
            cin >> c[i];
        }
        for (int i = 1; i <= n; i++)
        {
            v[i] = i;
        }
        while (1)
        {
            int i = n - 1;
            while (i > 0 && v[i] > v[i + 1])
            {
                i--;
            }
            if (i == 0)
            {
                break;
            }
            else
            {
                vt.push_back(v);
                cnt ++;
                int k = n;
                while (v[i] > v[k])
                    k--;
                swap(v[i], v[k]);
                int l = i + 1, r = n;
                while (l < r){
                    swap(v[l], v[r]);
                    l ++; r --;
                }
            }
        }
        for (int i = 0; i < vt.size(); i ++){
            if (vt[i] == c){
                cout << i + 1;
                break;
            }
        }
        cout << endl;
    }
}