#include <bits/stdc++.h>
using namespace std;
vector<int> x(1001);
int ok = 0;
void init(int k) {
    for (int i = 1; i <= k; i++) {
        x[i] = i;
    }
}
void sinh(int n, int k) {
    int i = k;
    while (i >= 1 && x[i] == n - k + i) {
        i--;
    }
    if (i == 0) {
        ok = 1;
    } else {
        x[i] += 1;
        for (int j = i + 1; j <= k; j++) {
            x[j] = x[j - 1] + 1;
        }
    }
}
void display(int k) {
    for (int j = 1; j <= k; j++) {
        cout << x[j];
    }
    cout << " ";
}
int main() {
    int t;
    cin >> t;
    while (t--){
        int n, k;
        ok = 0;
        cin >> n >> k;
        init(k);
        while (!ok) {
            display(k);
            sinh(n, k);
        }   
        cout << endl;
    }
}