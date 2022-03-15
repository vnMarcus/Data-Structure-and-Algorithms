#include <bits/stdc++.h>

using namespace std;
typedef long long ll;



int n, k , a[100];
bool stop;
void init(){
    cin >> n;
    k = 1;
    a[k] = n;
}

void res(){
    for (int i = 1; i <= k; i ++){
        if (i == 1) cout << "(";
        cout << a[i];
        if (i < k) cout << " ";
        else cout << ") ";
    }
}

void sinh(){
    int i = k;
    while (i > 0 && a[i] == 1) i --;
    if (i == 0) stop = true;
    else {
        a[i] -= 1;
        k = i;
        for (int j = i + 1; j <= )
    }
}




int main (){


}