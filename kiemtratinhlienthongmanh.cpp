#include <bits/stdc++.h>
using namespace std;
int n,s;
vector<vector<int>> G;
vector<int> visited;
int u,v, V, E;
void dfs(int s) {
    stack<int> st;
    st.push(s);
    visited[s] = 1;
    
    while (!st.empty()) {
     u = st.top(); st.pop();
        for (int v : G[u]) {
            if (!visited[v]) {
                visited[v] = 1;
                st.push(u);
                st.push(v);
                break;
            }
        }
    }
}
void check(){
   cin >> V >> E;
    G.clear(); G.resize(V + 1);
    while (E--) {
        cin >> u >> v;
        G[u].push_back(v);
    }
    for (int i = 1; i <= V; ++i) {
        visited.clear(); visited.resize(V + 1, 0);
        dfs(i);
        for (int j = 1; j <= V; ++j) {
            if (!visited[j]) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;

}
int main(){
    int t;
    cin >> t;
    while (t--){
        check();
    }
}