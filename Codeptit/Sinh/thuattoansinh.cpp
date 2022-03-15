#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;
int ckeck(string s){
    for (int i = 0; i < s.size() / 2; i ++){
        if (s[i] != s[s.size() -  1 - i])
            return 0;
    }
    return 1;
}



void Try(string s){
    if (s.size() == n){
        if (ckeck(s)){
            for (int i = 0; i < s.size(); i ++){
                cout << s[i] << " ";
            }
            cout << "\n";
        }
        
    }
    else{
        Try(s + "0");
        Try(s + "1");
    }
}





int main (){
    cin >> n;
    Try("");

}