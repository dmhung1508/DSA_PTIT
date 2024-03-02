#include <bits/stdc++.h>
using namespace std;
int n,s;
vector<vector<int>> G;
vector<int> visited;
void dfs(int u){
    visited[u] = 1;
    stack<int> st;
    st.push(u);
    while (!st.empty()){
        int u = st.top();
        st.pop();
        for (int i: G[u]){
            if (!visited[i]){
                visited[i] = 1;
                st.push(u);
                st.push(i);
                break;
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> s;
        G.clear();
        G.resize(n+10);
        visited.clear();
        visited.resize(n+10,0);
        while (s--){
            int u,v;
            cin >> u >> v;
            G[u].push_back(v);
            G[v].push_back(u);
        }
        int res = 0;
        for (int i = 1; i<=n; i++){
            if (!visited[i]){
                res++;
                dfs(i);
            }
        }
        cout << res << endl;
    }
}