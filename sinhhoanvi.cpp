#include<bits/stdc++.h>
using namespace std;
void display(const vector<int>& x, int n) {
    for (int j = 1; j <= n; j++) {
        cout << x[j];
    }
    cout << " ";
}
void generatePermutations(int n) {
    vector<int> x(n + 1, 0);
    int ok = 0;
    for (int i = 1; i <= n; i++) {
        x[i] = i;
    }
    while (!ok) {
        display(x, n);
        int i = n - 1;
        while (i >= 1 && x[i] > x[i + 1]) {
            i--;
        }
        if (i == 0) {
            ok = 1;
        } else {
            int k = n;
            while (x[i] > x[k]) {
                k--;
            }
            swap(x[k], x[i]);
            int r = i + 1;
            int s = n;
            while (r <= s) {
                swap(x[r], x[s]);
                r++;
                s--;
            }
        }
    }
}
int main() {
    int n;
    cin >> n;
    while (n--){
        int t;
        cin >> t;
        generatePermutations(t);
        cout << endl;

    }
    return 0;
}