#include <bits/stdc++.h>

using namespace std;

int n,a[100],k;
void solve(){
    for (int i =1; i<=k; i++) cout << a[i] << ' ';
    cout << endl;
}
void thu(int i, int last){
    if (i==n){
        solve();
        return;
    }
    for (int j= last +1; j<=n; j++){
        a[i]=j;
        thu(i+1,j);
    }
}
int main(){
    cin >> n >> k;
    thu(1,0);
}

