#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, a[12][12];
vector<string> ans;

void Try(int i, int j, string s){
    if (i == n && j == n){
        ans.push_back(s);
        return;
    }
    else {
        if (i < n && a[i + 1][j] == 1)
            Try(i + 1, j, s + "D");
        if (j < n && a[i][j + 1] == 1)
            Try(i, j + 1, s + "R");
    }
}

int main (){
    int t;
    cin >> t;
    while (t --){
        ans.clear();
        cin >> n;
        for (int i = 1; i <= n; i ++)
            for (int j = 1; j <= n; j ++)
                cin >> a[i][j];
        if (a[1][1] == 1){
            Try(1, 1, "");
        }
        if (ans.size() == 0)
            cout << "-1\n";
        else {
            for (int i = 0; i < ans.size(); i ++)
                cout << ans[i] << " ";
            cout << endl;
        }
        
    }

}