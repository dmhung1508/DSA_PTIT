#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, k;
        cin >> n >> s >> k;
        vector<vector<int>> dp(n + 1);
        vector<int> vt(n + 1, 0);

        for (int i = 1; i <= s; i++) {
            int x, y;
            cin >> x >> y;
            dp[x].push_back(y);
            dp[y].push_back(x);
        }

        stack<int> st;
        st.push(k);
        while (!st.empty()){
            int x = st.top();
            st.pop();
            if ( vt[x] == 0) {
                vt[x] = 1;
                cout << x << " ";
            }
            for (int i:dp[x]){
                if (vt[i] == 0){
                    st.push(x);
                    st.push(i);
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
