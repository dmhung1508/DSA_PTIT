#include <bits/stdc++.h>
using namespace std;
vector<int> a;
vector<vector<int>> st;
int n,sum;
bool ok= false;
void thu(int pos, int s, vector<int> lst){
    if (s == sum){
        ok = true;
        
            st.push_back(lst);
        return;

    }
    for (int i =0; i<n; i++){
        if (a[i] >= pos && s+ a[i] <= sum){
            lst.push_back(a[i]);
            thu(a[i],s+a[i],lst);
            lst.pop_back();
        }

    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        st.clear();
        ok = false;
        cin >> n >> sum;
        a.resize(n);
        for (int i =0; i<n; i++) cin >> a[i];
        sort(a.begin(),a.end());
        thu(0,0,{});
        if (ok){

            cout << st.size() << " ";
            for (auto i: st){
                cout << "{";
                for (int j =0; j<i.size(); j++){
                    if (j == i.size()-1) cout << i[j];
                    else cout << i[j] << " ";
                }
                cout << "} ";
            }
        }
        else cout << -1;
        cout << endl;
    }
}