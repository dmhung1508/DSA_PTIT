#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int n, k;
long long a[11][11], d[11][11];

void tich(long long a[11][11], long long b[11][11]) {
    long long c[11][11] = {};
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= n; ++k) {
                c[i][j] += a[i][k] * b[k][j];
                c[i][j] %= MOD;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            a[i][j] = c[i][j];
        }
    }
}
void luythua(long long a[11][11], int k) {
    if (k == 1) return;
    luythua(a, k / 2);
    tich(a, a);
    if (k % 2 == 1) tich(a, d);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                cin >> a[i][j];
                d[i][j] = a[i][j];
            }
        }
        luythua(a, k);
        long long ans = 0;
        for (int i = 1; i <= n; ++i) {
            ans += a[i][n];
            ans %= MOD;
        }
        cout << ans << endl;
    }
    return 0;
}