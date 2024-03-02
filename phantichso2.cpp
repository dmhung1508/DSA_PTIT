#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;
int n,s;
void thu(int lim, int remain, vector<int> v){
    if (remain == 0){
        dp.push_back(v);
        return;
    }
    for (int i= lim; i>=1;i--){
        if (remain >= i){
            v.push_back(i);
            thu(i,remain-i,v);
            v.pop_back();
        }
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        dp.clear();
        thu(n,n,{});
        cout << dp.size() << endl;
        for (int i = 0; i < dp.size(); i++){
            cout << "(";
            for (int j = 0; j < dp[i].size(); j++){
                if ( j!= dp[i].size()-1) cout << dp[i][j] << " ";
                else cout << dp[i][j];
            }
            cout << ") ";
        }
        cout << endl;
    }
}