#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,s;
        cin >> n >> s;
        vector<vector<int>> ke(n+1);
        for (int i = 0; i < s; ++i){
            int u,v;
            cin >> u >> v;
            ke[u].push_back(v);
        }
        for (int i =1; i<=n; i++){
            sort(ke[i].begin(), ke[i].end());
            cout << i << ": ";
            for (int j = 0; j < ke[i].size(); ++j){
                cout << ke[i][j] << " ";
            }   
            cout << endl;
        }
    }
}