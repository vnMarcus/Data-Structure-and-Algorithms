#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;

int n, k, a[100];
vector<int> v;
vector<vector<int>> ans;

void Try(int pos){
    for (int i = pos + 1; i <= n; i ++){
        if (a[i] > a[pos]){
            v.push_back(a[i]);
            if (v.size() == k)
                ans.push_back(v);
            Try(i);
            v.erase(v.end() - 1, v.end());
        }
    }
}





int main (){
    cin >> n >> k;
    a[0] = 0;
    for (int i = 1; i <= n; i ++){
        cin >> a[i];
    }
    Try(0);
    cout << ans.size();
}