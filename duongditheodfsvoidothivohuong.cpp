#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,s,x,k;
        cin >> n >> s >> x >> k;
        vector<vector<int>> G(n+1);
        while (s--){
            int u,v;
            cin >> u >> v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        vector<int> visited(n+1,0);
        stack<int> st;
        vector<int> vs(n+1,0);
        st.push(x);
        while (!st.empty()){
            int u = st.top();
            visited[u] = 1;
            if (u == k) break;
            st.pop();
            for (int i: G[u]){
                if (!visited[i]){

                    st.push(u);
                    st.push(i);
                    vs[i]=u;
                    break;
                }
            }
        }
        if (visited[k]){
            vector<int> res;
            res.push_back(k);
            int u = vs[k];
            while (u != x){
                res.push_back(u);
                u = vs[u];
            }
            res.push_back(x);
            reverse(res.begin(), res.end());
            for (int i: res){
                cout << i << " ";
            }
            cout << endl;
        }
        else cout << -1 << endl;
    }
}