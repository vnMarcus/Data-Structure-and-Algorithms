#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;

int ckeck6(string s){
    for (int i = 0; i < s.size(); i ++){
        if (s[i] == '6' && s[i + 1] == '6' && s[i + 2] == '6' && s[i + 3] == '6')
            return 0;
    }
    return 1;
}

int ckeck8(string s){
    for (int i = 0; i < s.size(); i ++){
        if (s[i] == '8' && s[i + 1] == '8'){
            return 0;
        }
    }
    return 1;
}


void Try(string s){
    if (s.size() == n - 3){
        s = "86" + s + "6";
        if (ckeck6(s) && ckeck8(s)){
            for (int i = 0; i < s.size(); i ++)
                cout << s[i];
            cout << endl;
        }
    }
    else {
        Try(s + "6");
        Try(s + "8");
    }
}




int main (){
    cin >> n;
    Try("");


}