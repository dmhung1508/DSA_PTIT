#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        int a[n],b[m];
        for (int i =0; i<n; i++) cin >> a[i];
        for (int i =0; i<m; i++) cin >> b[i];
        vector<int> dp(200,0);
        for (int i =0; i<n; i++){
            for (int j =0; j<m; j++){
                int k = i+j;
                dp[k] += a[i]*b[j];
            }
        }
        for (int i =0; i<n+m-1; i++) cout << dp[i] << " ";
        cout << endl;
    }
}