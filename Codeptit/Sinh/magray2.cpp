#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

char xor_c(char a, char b){
    return (a == b) ? '0' : '1'; 
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string gray, binary;
        cin >> gray;
        binary += gray[0];
        for (int i = 1; i < gray.size(); i ++){
            binary += xor_c(gray[i], binary[i - 1]);
        }
        cout << binary << endl;
    }
}