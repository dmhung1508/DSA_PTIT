#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
long long n, k;
long long c;
long long poww(long long x, long long y) {
    if (y == 0) return 1;
    long long res = poww(x, y / 2);
    if (y % 2 == 0) return (res * res) % MOD;
    return (x * ((res * res) % MOD)) % MOD;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    while (cin >> n >> k) {
        if (n == 0 && k == 0) break;
        cout << poww(n, k) << endl;
    }
}