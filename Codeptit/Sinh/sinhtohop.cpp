#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main (){
    int t;
    cin >> t;
    while (t --){
        int n, k;
        cin >> n >> k;
        int x[k + 1];
        for (int i = 1; i <= k; i ++)   cin >> x[i];
        while (1){
            for (int i = 1; i <= k; i ++)    cout << x[i]; cout << " ";
            int i = k;
            while (x[i] == n - k + i && i > 0) i --;
            if (i == 0) break;
            else {
                x[i] ++;
                for (int j = i + 1; j <= k; j ++){
                    x[j] = x[i] + j - i;
                }
            } 
        }
        cout << endl;
    }

}