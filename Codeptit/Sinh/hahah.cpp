#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;
set<string> v;

void print(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
}

int ckeck(string s)
{
    if (s[0] != 'H' || s[s.size() - 1] != 'A')
        return 0; 
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'H' && s[i + 1] == 'H')
            return 0;
    }
    return 1;
}

void Try(string s)
{
    if (s.size() == n)
    {
        if (ckeck(s))
            v.insert(s);
    }
    else
    {
        Try(s + "H");
        Try(s + "A");
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        Try("");
        for (string s : v)
            cout << s << endl;
        v.clear();
    }

    
}