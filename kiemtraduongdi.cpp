#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,s;
        cin >> n >> s;
        vector<vector<int>> G(n+1);
        while (s--){
            int x,y;
            cin >> x >> y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        int q;
        cin >> q;
        while (q--){
            int x,y;
            cin >> x >> y;
            vector<bool> vs(n+1,0);
            queue<int> st;
            st.push(x);
            while (!st.empty()){
                int u = st.front();
                st.pop();
                if (vs[u] == false){
                    vs[u] = true;
                    for (int v : G[u]){
                        if (vs[v] == false){
                            st.push(v);
                        }
                    }
                }
                if (u == y){
                    break;
                }

            }
            if (vs[y] == true){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}