#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        int a, f[1001][1001];
        for (int i =1; i<=n; i++){
            f[0][i] = -1e9;
        }
        f[0][0] = 0;
        for (int i =1; i<=n; i++){
            int x;
            cin >> x;
            x %= k;
            for (int j=0; j<k; j++){
                f[i][j] = max(f[i - 1][j], f[i - 1][(j + k - x) % k]+1);
            }
        }
        cout << f[n][0] << endl;
    }
}