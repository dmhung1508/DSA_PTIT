#include <bits/stdc++.h>
using namespace std;
int n,s;
vector<vector<int>> G;
vector<int> vs;
int ok;
void check(int u){
    if (ok) return;
    vs[u] = 1;
    for (int v:G[u]){
        if (vs[v] == 1){
            ok =1;
            return;
        }
        else if (vs[v] == 0){
            check(v);
        }
    }
    vs[u] = 2;

}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> s;
        ok = 0;
        G.clear();
            G.resize(n+1);
            vs.clear();
            vs.resize(n+1,0);
        while (s--){
            int x,y;
            cin >> x >> y;
            
            G[x].push_back(y);
        }
        for (int i=1; i<=n; i++){
            if (!vs[i] && !ok){
                check(i);
            }
        }
        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}