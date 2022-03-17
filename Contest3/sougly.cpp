// #include <bits/stdc++.h>
// using namespace std;

// int solve(int n)
// {

//     int pow[40] = {1};
//     for (int i = 1; i <= 30; ++i)
//         pow[i] = pow[i - 1] * 2;
//     int l = 1, r = 2147483647;
//     int ans = -1;
//     while (l <= r)
//     {

//         int mid = (r + l) / 2;
//         int cnt = 0;
//         for (long long i = 1; i <= mid; i *= 5)
//         {
//             for (long long j = 1; j * i <= mid; j *= 3)
//             {
//                 cnt += upper_bound(pow, pow + 31,
//                                    mid / (i * j)) - pow;
//             }
//         }
//         if (cnt < n)
//             l = mid + 1;
//         else
//             r = mid - 1, ans = mid;
//     }

//     return ans;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t --){
//         int n;
//         cin >> n;
//         cout << solve(n) << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    if (n == 1 or n == 2 or n == 3 or n == 4 or n == 5)
        return n;
    set<long long int> s;
    s.insert(1);
    n--;
    while (n)
    {
        auto it = s.begin();
        long long int x = *it;
        s.erase(it);
        s.insert(x * 2);
        s.insert(x * 3);
        s.insert(x * 5);
        n--;
    }
    return *s.begin();
}

int main()
{
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
}
