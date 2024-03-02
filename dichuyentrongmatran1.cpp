#include <bits/stdc++.h>
using namespace std;
try()
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        int a[n][m];
        for (int i=0; i< n; i++){
            for (int j=0; j< m; j++){
                cin >> a[i][j];
            }
        }
        queue<pair<int,int>> st;
        st.push({0,0});
        int dem = 0;
        while (!st.empty()) {
            
            cout << st.size() << endl;
            pair<int,int> s = st.front();
            
            st.pop();
            int x = s.first;
            int y = s.second;
            if (x <n|| y <m){
                dem++;
            }
            if (x == n-1 && y == m-1) {
                cout << dem << endl;
                break;
            }
            if (x+a[x][y] < n) st.push({x+a[x][y],y});
            if (y+a[x][y] < m) st.push({x,y+a[x][y]});
        }
    }
}