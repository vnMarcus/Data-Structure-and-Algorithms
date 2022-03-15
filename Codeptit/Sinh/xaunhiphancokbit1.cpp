#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, k;

void print(string s){
    for (int i = 0; i < s.size(); i ++){
        cout << s[i];
    }
    cout << endl;
}

int ckeck_sum_equal_to_k(string s){
    int sum = 0;
    for (int i = 0; i < s.size(); i ++){
        sum += s[i] - '0';
    }
    return sum == k;
}

void Try(string s){
    if (s.size() == n){
        if (ckeck_sum_equal_to_k(s)){
            print(s);
        }
    }
    else {
        Try(s + "0");
        Try(s + "1"); 
    }
}


int main (){
    int t;
    cin >> t;
    while (t --){
        cin >> n >> k;
        Try("");
    }

}