#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(k + 1);
        map<int, int> mp;
        for (int i = 1; i <= k; ++i) {
            cin >> a[i];
            mp[a[i]]++;
        }
        
        int i = k;
        while (i >= 1 && a[i] == n - k + i) i--;
        if (i == 0) {
            cout << k << endl;
            continue    ;
        }
        
        a[i]++;
        while (i < k) {
            a[i + 1] = a[i] + 1;
            i++;
        }
        int ans = 0;
        for (int i = 1; i <= k; ++i) {
            if (mp[a[i]] == 0) ans++;
        }
        cout << ans;
        cout << "\n";
    }
    return 0;
}