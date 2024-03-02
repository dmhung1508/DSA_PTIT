#include<bits/stdc++.h>
using namespace std;
vector<int> a,b,c;
vector<vector<int>> dp;
int n,k;
void solve(){
    vector <int> x;
    for (int i = 1; i<=n; i++) x.push_back(a[i]);
    dp.push_back(x);
}
bool nto(long long a){
    if (a<2) return 0;
    for (int i = 2; i<=sqrt(a); i++){
        if (a%i==0) return 0;
    }
    return 1;
}
int check(vector<int> s, int k){
    int sum = 0;
    for (int i = 0; i<k; i++){
        sum += s[i];
    }
    if (!nto(sum)) return 0;
    for (int i =k; i<s.size(); i++){
        
        sum -= s[i-k];
        sum += s[i];
        if (!nto(sum)) return 0;

    }
    return 1;


}
void thu(int i){
    for (int j = 1; j<=n; j++){
        if (!b[j]){
            a[i] = c[j];
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
        cin >> n >> k;
        a.resize(n+1);
        c.resize(n+1);
        b.clear(); b.resize(n + 1, 0);
        for (int i =1; i<=n; i++){
            cin >> c[i];
        }
        thu(1);
        cout << endl;
        for (auto i:dp){
            if (check(i,k)){
                for (auto j:i){
                    cout << j << " ";
                }
                cout << endl;
            }
            
        }
    }
}