#include <bits/stdc++.h>
using namespace std;
vector <int> a,b;
int n;
set<vector<int>> dp;
bool checksonguyento(long long n){
    if (n<2) return false;
    for (int i =2; i<=sqrt(n); i++){
        if (n%i == 0) return false;
    }
    return true;
}

void solve(){
    long long s = 0;
    vector<int> k;
    for (int i =0; i<n; i++){
        s += a[i]*b[i];
        if (b[i] == 1){
            k.push_back(a[i]);
        }
    }
    if (checksonguyento(s)) {
        reverse(k.begin(), k.end());
        dp.insert(k);
        // cout << "s: " << s << endl;
        // for (int i =0; i<k.size(); i++){
        //     if (i == k.size()-1) cout << k[i];
        //     else cout << k[i] << " ";
        // }
        // cout << endl;
    }
}
void thu(int i){
    for (int j=0; j<=1; j++){
        b[i] = j;
        if (i == n-1){
            solve();
        } 
        else thu(i+1);
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        dp.clear();
        a.resize(n);
        b.resize(n,0);
        for (int i =0; i<n; i++) cin >> a[i];
        sort(a.begin(),a.end());
        thu(0);
        for (auto i:dp){
            for (int j =0; j<i.size(); j++){
                if (j == i.size()-1) cout << i[j];
                else cout << i[j] << " ";
            }
            cout << endl;
        }
    }
}