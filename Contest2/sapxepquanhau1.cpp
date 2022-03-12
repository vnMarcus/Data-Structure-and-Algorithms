#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;
int cnt = 0;
int n, cot[100], d1[100], d2[100], x[100];
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (cot[j] == 1 && d1[i - j + n] == 1 && d2[i + j - 1] == 1)
        {
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
            x[i] = j;
            if (i == n)
                cnt++;
            else
            {
                Try(i + 1);
            }
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t --){
        cin >> n;
        cnt = 0;
        for (int i = 1; i <= 100; i ++)
            cot[i] = d1[i] = d2[i] = 1;
        Try(1);
        cout << cnt << endl;
    }
}