#include <bits/stdc++.h>
using namespace std;
vector<int> a,b;
set<vector<int>> st;
int n,sum;
void thu(int i){
    for (int j = 0; j<=1; j++){
        b[i] = j;
        if (i == n-1){
            int s = 0;
            vector<int> lst;
            for (int k = 0; k<n; k++){
                if (b[k] == 1){
                    s+= a[k];
                    lst.push_back(a[k]);
                }
            }
            reverse(lst.begin(), lst.end());
            if (s %2 == 1 ) st.insert(lst);
        }
        else thu(i+1);
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        a.resize(n);
        b.resize(n,0);
        st.clear();
        for (int i =0; i<n; i++) cin >> a[i];
        sort(a.begin(),a.end());
        thu(0);
       
        for (auto i: st){
            for (int j=0; j< i.size(); j++){
                if (j == i.size()-1) cout << i[j];
                else cout << i[j] << " ";
            }
            cout << endl;
        }
    }
}