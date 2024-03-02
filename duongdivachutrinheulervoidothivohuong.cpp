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
        int odd= 0;
        for (int i = 1; i<=n; i++){
            if (G[i].size() % 2 == 1){
                odd++;
            }
        }
        if (odd == 0){
            cout << 2 << endl;
        }
        else if (odd == 2){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}