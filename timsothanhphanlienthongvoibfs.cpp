#include <bits/stdc++.h>
using namespace std;
int n,s;
vector<vector<int>> G;
vector<int> visited;
void bfs(int u){
    visited[u]= 1;
    queue<int> q;
    q.push(u);
    while (!q.empty()){
        int u = q.front();
        q.pop();
        for (int i: G[u]){
            if (!visited[i]){
                visited[i] = 1;
                q.push(i);
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
                bfs(i);
            }
        }
        cout << res << endl;
    }
}