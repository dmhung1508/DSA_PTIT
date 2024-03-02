#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i =0; i< n; i++){
        cin >> a[i];
    }
    vector<int> f(1000,1);
    int res = 0;
    for (int i=0; i<n; i++){
        for (int j =0; j<i;j ++){
            if (a[i] > a[j]){
                f[i] = max(f[i], f[j] + 1);
                res = max(f[i],res);     
            }
        }
    }
    cout << res ;

}