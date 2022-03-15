#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;
int x[50] = {};

void printResult(int pt){
    cout << "(";
    for (int i = 1; i < pt; i ++){
        cout << x[i] << " ";
    }
    cout << x[pt] << ")";
    cout << " ";
}

void process(int pt, int sum, int k){
    for (int i = k; i > 0; i --){
        if (sum + i <= n){
            x[pt] = i;
            sum += i;
            if (sum == n) printResult(pt);
            else process(pt + 1, sum, i);
            sum -= i;
        }
    }
}



int main (){
    int t;
    cin >> t;
    while (t --){
        cin >> n;
        process(1, 0, n);
        cout << endl;
    }

}