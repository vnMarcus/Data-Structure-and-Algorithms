#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int test;
        string s;
        cin >> test >> s;
        int n = s.size();
        int i = n - 2;
        while (s[i + 1] <= s[i])
			i--;
        if (i == -1)
        {
            cout << test << " "
                 << "BIGGEST\n";
        }
        else
        {
            int k = n - 1;
            while (s[i] >= s[k])
                k--;
            swap(s[k], s[i]);
            sort(s.begin() + i + 1, s.end());
            cout << test << " " << s << endl;
        }
    }
}