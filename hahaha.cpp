#include<bits/stdc++.h>
using namespace std;
vector<int> a;
void solve(){
    if (a[0] == 1 && a[a.size()-1] == 0){
        for (int i = 1; i< a.size(); i++){
            if (a[i] == a[i-1] && a[i] == 1) return;
        }
        for (int i:a){
            if (i==1) cout << "H";
                else cout << "A";
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
        cin >> n ;
        a.clear();
        a.resize(n);
        thu(0);
    }
}