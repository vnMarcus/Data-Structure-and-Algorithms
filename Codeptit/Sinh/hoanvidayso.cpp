#include <bits/stdc++.h>

using namespace std;
typedef long long ll;





int main (){
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i ++)   cin >> a[i];
    sort(a + 1, a + n + 1);
    int b[n + 1];
    for (int i = 1; i <= n; i ++){
        b[i] = i;
    }
    while (1){
        for (int i = 1; i <= n; i ++)    cout << a[b[i]] << " ";
        cout << endl;
        int i = n - 1;
        while (b[i] > b[i + 1] && i > 0) i --;
        if (i == 0)
            break;
        else {
            int k = n;
            while (b[k] < b[i]) k --;
            swap(b[i], b[k]);
            int l = i + 1, r = n;
            while (l < r){
                swap(b[l], b[r]);
                l ++; r --;
            }
        }

    }

}