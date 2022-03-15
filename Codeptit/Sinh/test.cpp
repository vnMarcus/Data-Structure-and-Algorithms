#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main (){
    int x;
    queue<int> q;
    for (int i = 2; i <= 10; i ++){
        q.push(i);
    }
    for (int i = 1; i <= 3; i ++){
        q.pop();
    }
    cout << q.pop();

}