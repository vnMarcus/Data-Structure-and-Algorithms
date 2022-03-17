#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;
double f[105][105];
int main() {
	int t;
	cin >> t;
	while (t--) {
		memset(f, 0, sizeof(f));
		int n, w;
		cin >> n >> w;
		int a[105];
		int c[105];
		for (int i = 1; i <= n; i++) {
			cin >> a[i] >> c[i];
		}
		for (int i = 1; i <= w; i++) {
			for (int j = 1; j <= n; j++) {
				for (int k = 1; k <= min(i, c[j]); k++) {
					f[i][j] = max(max(f[i][j - 1], f[i][j]), 
                    (double)(f[i - k][j - 1] + (double)k / c[j] * a[j]));
				}
			}
		}
		printf("%.2lf", f[w][n]);
		cout << endl;
	}
}