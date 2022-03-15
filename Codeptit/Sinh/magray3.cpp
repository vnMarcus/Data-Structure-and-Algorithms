#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

char process(char a, char b){
    return (a != b) ? '1' : '0';
}


int main (){
    int t;
    cin >> t;
    while (t --){
        string gray, binary;
        cin >> binary;
        gray += binary[0];
        for (int i = 1; i < binary.size(); i ++){
            gray += process(binary[i], binary[i - 1]);
        }
        cout << gray << endl;
    }

}