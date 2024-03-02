#include <bits/stdc++.h>
using namespace std;
int n,s,res;
vector<vector<int>> G;
vector<bool> vs;
void bfs(int u){
    queue<int> st;
    st.push(u);
    while (!st.empty()){
        int u = st.front();
        st.pop();
        vs[u] = 1;
        for (int v: G[u]){
            if (!vs[v]){
                vs[v] = 1;
                st.push(v);
            }
        }
    }
}
int check(int s){
    vs.clear();
    vs.resize(n+1,0);
    vs[s] = 1;
    int req = 0;
    for (int i =1; i<=n; i++){
        if (!vs[i]){
            bfs(i);
            req++;
            }

        }
    return req > res;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> s;
        G.clear();
        G.resize(n+1);
        vs.clear();
        vs.resize(n+1,0);
        while (s--){
            int x,y;
            cin >> x >> y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        res = 0;
        for (int i =1; i<=n; i++){
            if (!vs[i]){
                bfs(i);
                res++;
            }

        }
        for (int i=1; i<=n; i++){
            if (check(i)){
                cout << i << " ";
            }
        }
        cout << endl;

    }
}