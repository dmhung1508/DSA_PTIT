#include <bits/stdc++.h>
using namespace std;
vector<int> a,b;
vector<vector<int>> st;
int n,k;
bool sx(vector<int>& a){
    vector<int> c = a;
    sort(c.begin(),c.end());
    return c == a;
}
void solve(){
    vector <int>c;
    for (int i=0; i<n; i++){
        if (b[i]==1) c.push_back(a[i]);
    }
    if (sx(c) && c.size() == k){
        st.push_back(c);
    }
}
void thu(int i){
    for (int j=0; j<=1; j++){
        b[i]=j;
        if (i== n-1){
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
        for (int i=0; i<n; i++) cin >> a[i];
        thu(0);
        for (int i =st.size()-1; i>=0; i--){
            for (int j=0; j<st[i].size(); j++){
                cout << st[i][j] << " ";
            }
            cout << endl;
        }
    }
}