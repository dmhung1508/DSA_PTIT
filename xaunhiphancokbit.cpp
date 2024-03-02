#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int k;
void solve(){
    int cnt =0;
    for (int i:a){
        if (i==1) cnt++;
    }
    if (cnt == k){
        for (int i:a){
            cout << i;
        }
        cout << endl;
    }
}
void thu(int i){
    for (int j=0;j<=1;j++){
        a[i] = j;
        if (i==a.size()-1) solve();
        else thu(i+1);
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n >> k;
        a.clear();
        a.resize(n);
        thu(0);
    }
}