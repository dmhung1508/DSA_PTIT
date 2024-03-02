#include <iostream>
#include <vector>
using namespace std;

int n;
vector<long long> bit;

void updatep(int u, int v) {
    while (u <= n) {
        bit[u] += v;
        u += u & (-u);
    }
}

void updatedoan(int l, int r, int v) {
    updatep(l, v);
    updatep(r + 1, -v);
}

long long get(int u) {
    long long sum = 0;
    while (u > 0) {
        sum += bit[u];
        u -= u & (-u);
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    bit.resize(n + 1, 0);

    long long prev_val = 0, curr_val;
    for (int i = 1; i <= n; i++) {
        cin >> curr_val;
        updatep(i, curr_val - prev_val);
        prev_val = curr_val;
    }

    int u;
    cin >> u;
    while (u--) {
        int s;
        cin >> s;
        if (s == 1) {
            int l, r, k;
            cin >> l >> r >> k;
            updatedoan(l, r, k);
        } else {
            int r;
            cin >> r;
            cout << get(r) << '\n';
        }
    }

    return 0;
}
