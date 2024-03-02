#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,s,k;
        cin >> n >> s >> k;
        vector<vector<int>> G(n+1);
        vector<int> vs(n+1,0);
        vector<pair<int,int>> st;
        while(s--){
            int x,y;
            cin >> x >> y;
            G[x].push_back(y);
            G[y].push_back(x);

        }
        queue<int> dp;
        dp.push(k);
        vs[k] = 1;
        while (!dp.empty()){
            int u = dp.front();
            dp.pop();
            vs[u] = 1;
            for (int v: G[u]){
                if (!vs[v]){
                    st.push_back({u,v});
                    dp.push(v);
                    vs[v] = 1;
                }
            }
        }
        
        int ok = 0;
        for (int i =1; i<=n; i++){
            if (!vs[i]){
                cout << -1 << endl;
                ok = 1;
                break;
            }
        }
        if (ok == 0){
            for (auto i : st) {
                cout << i.first << " " << i.second << endl;
            }
        }
    }
}