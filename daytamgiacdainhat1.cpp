#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[100005], l[100005] = {}, r[100005] = {};
        for (int i =1; i<=n; i++){
            cin >> a[i];
        }
    
        for (int i=1; i<=n; i++){
            if (a[i] > a[i-1]){
                l[i] = l[i-1] +1;
            }
            else l[i] = 1;
        }
        for (int i=n; i >=1; i--){
            if (a[i] > a[i+1]){
                r[i] = r[i+1] +1;
            }
            else r[i] = 1;
        }
        int res = 0;
        for (int i =1; i<=n; i++){
            res =max(res, r[i]+l[i]-1);
        }
        cout << res << endl;
    }
}