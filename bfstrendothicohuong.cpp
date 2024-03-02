#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,s,k;
        cin >> n >> s >> k;
        vector<vector<int>> G(n+1);
        vector<bool> vs(n+1,0);
        while (s--){
            int x,y;
            cin >> x >> y;
            G[x].push_back(y);
        }
        queue<int> st;
        st.push(k);

        while (!st.empty()) {
            int u = st.front(); st.pop();
            if (vs[u] == false) {
                cout << u << " ";
                vs[u] = true;
            }

            for (int v : G[u]) {
                if (vs[v] == false) {
                    st.push(v);
                }
            }
        }
            cout << endl;
        }
}