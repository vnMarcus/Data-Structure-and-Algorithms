#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, k;
vector<string > v;


int ckeck(string s){
    int i = 0;
    int cnt = 0;
    while (i < s.size()){
        while (s[i] == 'B'){
            i ++;
            cnt = 0;
        }
        while (s[i] == 'A'){
            i ++;
            cnt ++;
        }
        if (cnt == k)
            return 1;
    }
    return 0;
    
}



void Try(string s){
    if (s.size() == n){
        if (ckeck(s))
            v.push_back(s);
    }
    else {
        Try(s + "A");
        Try(s + "B");
    }
}





int main (){
    cin >> n >> k;
    Try("");
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i ++){
        cout << v[i] << endl;
    }

}