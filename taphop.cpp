#include <bits/stdc++.h>
using namespace std;
vector <int> a;
int n,k,s;
int ans;
void solve(){
    int sum=0;
    for (int i=1; i<=k; i++){
        sum+=a[i];
    }
    if (sum==s) ans++;
}
void thu(int i){
    for (int j = a[i-1]+1; j<=n-k+i; j++){
        a[i]=j;
        if (i==k){
            solve();
        }
        else thu(i+1);
    }
}
int main(){
    while (cin >> n >> k >> s){
        if (n ==0 && k == 0 && s == 0) break;
        a.resize(k);
        ans=0;
        thu(1);
        cout << ans << endl;
    }
}