#include <bits/stdc++.h>
using namespace std;
vector <int> a,b;
int n,k;
vector<vector<int>> qp;
void solve(){
    vector<int> dt;
    for (int i =0; i<n; i ++){
        if (b[i]== 1){
            dt.push_back(a[i]);
        }
    }
    if (dt.size() == k){

        vector<int> c = dt;
        sort(c.begin(), c.end());
        if (c== dt){
            qp.push_back(dt);
        }
    }
    
}
void thu(int i){
    for (int j = 0; j<=1; j++){
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
        cin >> n >> k;
        a.resize(n);
        b.resize(n,0);
        qp.clear();
        for (int i =0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        thu(0);
        for (int i = qp.size()-1; i >=0; i--){
            for (int j =0; j< qp[i].size(); j++){
                if (j == qp[i].size()-1) cout << qp[i][j];
                else cout << qp[i][j] << " ";
            }
            cout << endl;
            
        }

    }
}