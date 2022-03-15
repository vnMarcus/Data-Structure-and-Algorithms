#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;

void Try(string s){
    if (s.size() == n){
        for (int i = 0; i < s.size(); i ++){
            cout << s[i];
        }
        cout << " ";
    }
    else{
        Try(s + "A");
        Try(s + "B");
    }
}


int main (){
    int t;
    cin >> t;
    while (t --){
        cin >> n;
        Try("");
        cout << endl;
    }

}