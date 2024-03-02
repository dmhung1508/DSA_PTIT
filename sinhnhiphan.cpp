#include <bits/stdc++.h>
using namespace std;
vector<int> x(1001);
int check(int n) {
    int k = n / 2;
    for (int i = 1; i <= k; i++) {
        if (x[i] != x[n - i + 1]) {
            return 0;
        }
    }
    return 1;
}
void thu(int i, int n) {
    for (int j = 0; j < 2; j++) {
        x[i] = j;
        if (i == n) {
            if (check(n) == 0) continue;
            for (int v = 1; v <= n; v++) {
                cout << x[v] << " ";
            }
            cout << endl;
        } else {
            thu(i + 1, n);
        }
    }
}
int main() {
    int n;
    cin >> n;
    thu(1, n);
    return 0;
}