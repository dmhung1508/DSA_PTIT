#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
string s;
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
set<string> dp;
void solve() {
    string q;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            q += s[i];
        }
    }
    if (q.size() > 0) {
        dp.insert(q);
    }
}
void thu(int i) {
    if (i == n) {
        solve();
        return;
    }
    for (int j = 0; j <= 1; j++) {
        a[i] = j;
        thu(i + 1);
    }
}
void xu_ly(){
    cin >> n;
    cin >> s;
    thu(0);
    for (auto it:dp){
        cout << it << " ";
    }
    cout << endl;
}
int main(){
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        dp.clear();
        xu_ly();
    }
    
    return 0;
}