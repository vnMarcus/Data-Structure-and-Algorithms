#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    while (1)
    {
        int n, k, s, d = 0;
        cin >> n >> k >> s;
        if (n < k){
            cout << 0 << endl;
            continue;
        }
        if (n == 0 && k == 0 && s == 0)
            return 0;
        int a[k + 1];
        for (int i = 1; i <= k; i++)
            a[i] = i;
        while (1)
        {
            int x = 0;
            for (int i = 1; i <= k; i++)
                x += a[i];
            if (x == s)
                d++;
            int i = k;
            while (a[i] == n - k + i && i > 0) i --;
            if (i == 0)
                break;
            else {
                a[i] ++;
                for (int j = i + 1; j <= k; j ++)
                    a[j] = a[i] + j - i;
            }
        }
        cout << d << endl;
    }
}