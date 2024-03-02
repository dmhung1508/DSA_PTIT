#include <bits/stdc++.h>
using namespace std;
int n,s;
vector<int> dp;
vector<string> st;
vector<vector<string>> a;
void thu( int vt, int remain, vector<string> k){
    if (remain <= 0 || vt == n ){
        if (remain == 0){
            a.push_back(k);
        }
        return;

    }
    k.push_back(to_string(dp[vt]));
    thu(vt, remain - dp[vt], k);
    k.pop_back();
    thu(vt+1, remain, k);


}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> s;
        dp.resize(n);
        st.resize(n);
        for (int i = 0; i < n; ++i) {
            cin >> dp[i];
        }
        thu(0,s,{});
        if (a.size() == 0) cout << -1;
        else {
            for (int i = 0; i < a.size(); ++i) {
                cout << "[";
                for (int j = 0; j < a[i].size(); ++j) {
                    cout << a[i][j];
                    if (j != a[i].size() - 1) cout << " ";
                }
                cout << "]";
            }
        }
        cout << endl;
        a.clear();
        dp.clear();
        st.clear();
    }
}