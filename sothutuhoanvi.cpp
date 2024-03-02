#include <bits/stdc++.h>
using namespace std;
vector <int> a,b,tmp;
int n,res,stop;
void solve(){
    res++;
    for (int i =1; i<=n; i++){
        if (b[i] != a[i]) return;
    }
    stop = 1;

}
void thu(int i){
    if (stop == 1) return;
    for (int j=1; j<=n;j++){
        if (tmp[j] == 0){
            b[i] = j;
            tmp[j] = 1;
            if (i == n) solve();
            else thu(i+1);
            tmp[j] = 0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        res = 0;
        cin >> n;
        a.resize(n + 1);
        b.resize(n + 1);
        tmp.resize(n + 1);
        for (int i=1; i<=n; i++){
            cin >> a[i];
            tmp[i] = 0;
        }
        stop = 0;
        thu(1);
        cout << res << endl;
    }
}