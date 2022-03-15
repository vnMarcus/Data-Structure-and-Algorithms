#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int i = n - 1;
        while (s[i] == '0')
            i--;
        if (i < 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << 1;
            }
        }
        else
        {
            s[i] = '0';
            for (int j = i + 1; j < n; j ++)
                s[j] = '1';
            for (int i = 0; i < n; i++)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
}