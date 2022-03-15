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
        int x[n + 1];
        for (int i = 1; i <= n; i++)
            x[i] = i;
        while (1)
        {
            for (int i = 1; i <= n; i++)
                cout << x[i];
            cout << " ";
            int j = n - 1, k = n;
            while (x[j] > x[j + 1] && j > 0)
                j--;
            if (j == 0)
                break;
            else
            {
                while (x[k] < x[j])
                    k--;
                swap(x[j], x[k]);
                int l = j + 1, r = n;
                while (l < r)
                {
                    swap(x[l], x[r]);
                    l++;
                    r--;
                }
            }
        }
        cout << endl;
    }
}