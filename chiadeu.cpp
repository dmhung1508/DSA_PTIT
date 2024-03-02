#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[20];
int res;
void thu(int x, int l, int r, int k){
    if (l >  r) return;
    if (k == 1){
        if (a[r] - a[l-1] == x){
            res++;
        }
    }
    
    for (int i = l; i<= r; i++){
        if (a[i] - a[l-1] == x){
            thu(x, i+1, r, k-1);
        }
    }
}
int main(){

        cin >> n >> k;
        for (int i = 1; i<= n; i++){
            cin >> a[i];
            a[i] += a[i-1];
        }
        res = 0;
        if (k == 1) res= 1;
        else {
            for(int i = 1; i<=n; i++){
                thu(a[i], i+1, n, k-1);
            }
        }
        cout << res << endl;
    
}