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

        int i = s.size() - 1;
        while (s[i] == '1' && i >= 0)
            i--;
        if (i < 0)
        {
            for (int i = 1; i <= s.size(); i++)
                cout << 0;
        }
        else
        {
            s[i] = '1';
            for (int j = i + 1; j < s.size(); j++)
                s[j] = '0';
            for (int j = 0; j < s.size(); j++)
                cout << s[j];
        }
        cout << endl;
    }
}