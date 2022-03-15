#include <bits/stdc++.h>

using namespace std;


int a[100], w[100], p[100], d[100];
int n, k;

int Max = 0;
int Min = 0;

void process(){
    float sum1 = 0;
    float sum2 = 0;
    for (int i = 0;i  < n; i ++){
        if (a[i]){
            sum1 += w[i];
            sum2 += p[i];
        }
    }
    if (sum1 <= k && sum2 > 0){
        if (sum2 == Max && sum1 < Min){
            Min = sum1;
            for (int i = 0; i < n; i ++)    d[i] = a[i];
        }
        if (sum2 > Max){
            Max = sum2;
            Min = sum1;
            for (int i = 0; i < n; i ++)    d[i] = a[i];
        }
    }
}

void Try(int i){
    for (int j = 0; j <= 1; j ++){
        a[i] = j;
        if (i == n - 1) process();
        else Try(i + 1);
    }
}


int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i ++)    cin >> w[i];
    for (int i = 0; i < n; i ++)    cin >> p[i];
    Try(0);
    cout << Max << endl;
    for (int i = 0;i < n; i ++)    cout << d[i] << " ";
}