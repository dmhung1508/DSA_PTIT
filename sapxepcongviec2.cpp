#include <bits/stdc++.h>
using namespace std;
int sx(pair<int,int> a, pair <int,int> b){
    if (a.second  == b.second ){
        return a.first  > b.first ;
    }
    return a.second  > b.second ;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int k,maxx= 0;
        vector <pair<int,int>> a(n);
        for (int i = 0; i < n; i++){
            cin>>k;
            cin >> a[i].first >> a[i]. second;
            maxx = max(maxx, a[i].first);
        }
        sort(a.begin(),a.end(),sx);
        pair <int,int> ans = {0,0};
        // for (int i = 0; i < n; i++){
        //     cout << a[i].first << " " << a[i].second << endl;
        // }
        vector<int> dp(maxx+1,0);
        for (int i = 0; i < n; i++){
            for (int j = a[i].first; j >= 1; --j) {
            if (!dp[j]) {
                dp[j] = 1;
                ans.first++;
                ans.second += a[i].second;
                break;
            }
        }
        }
        cout << ans.first << " " << ans.second << endl;
    }
}