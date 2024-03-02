#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int a[t+1][t+1];
    vector<vector<int>> dp(t+1);
    for (int i=1; i<=t; i++){
        for (int j =1; j<=t; j++){
            int x;
            cin >> x;
            if (x==1){
                dp[i].push_back(j);
            }
        }
    }
    for (int i = 1; i <= t; i++){
        for (int x:dp[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}