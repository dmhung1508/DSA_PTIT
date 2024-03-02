#include<bits/stdc++.h>
using namespace std;
vector<int> a,b;
int n;
void solve(){
    for (int i = 1; i<=n; i++) cout <<a[i];
    cout << " ";
}
void thu(int i){
    for (int j = n; j>=1; j--){
        if (!b[j]){
            a[i] = j;
            b[j] = 1;
            if (i==n) solve();
            else thu(i+1);
            b[j] = 0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        a.resize(n+1);
        b.clear(); b.resize(n + 1, 0);
        thu(1);
        cout << endl;
    }
}