#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;


int solve(string s, int n){
    int table[n][n], l, h, gap;

     memset(table, 0, sizeof(table));

    for (gap = 1; gap < n; gap ++){
        for (l = 0, h = gap; h < n; h ++, l ++){
            if (s[l] == s[h])
                table[l][h] = table[l + 1][h - 1];
            else {
                table[l][h] = min(table[l][h - 1], table[l + 1][h]) + 1;
            }
        }
    }
    return table[0][n - 1];


}

int main (){
    int t;
    cin >> t;
    while (t --){
        string s;
        cin >> s;
        cout << solve(s, s.size()) << endl;
    }

}