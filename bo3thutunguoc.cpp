#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int n, bit[N];

void update(int i) {
    for (; i < N; i += i & -i)
        bit[i]++;
}

long long get(int u) {
    long long sum = 0;
    while (u > 0) {
        sum += bit[u];
        u -= u & (-u);
    }
    return sum;
}

int ans(int a[]) {
    int right[N], left[N];
    for (int i = n - 1; i >= 0; i--) {
        right[i] = get(a[i] - 1);
        update(a[i]);
    }
    memset(bit, 0, sizeof(bit));
    for (int i = 0; i < n; i++) {
        left[i] = i - get(a[i]);
        update(a[i]);
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        res += left[i] * right[i];
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        memset(bit, 0, sizeof(bit));
        cin >> n;
        int a[N];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << ans(a) << endl         ;
    }
    return 0;
}
