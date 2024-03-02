#include <bits/stdc++.h>
using namespace std;
vector <int> a,b;
int n,k,dem;
void solve(){
    int sum = 0;
    for (int i =0; i<n; i++){
        sum += a[i]*b[i];
    }
    if (sum == k){
        for (int i = 0; i<n; i++){
            if (b[i] == 1) cout << a[i] << " ";
        }
        cout << endl;
        dem++;
    }

}
void thu(int i){
    for (int j=0; j<=1; j++){
        b[i] = j;
        if (i == n-1) solve();
        else thu(i+1);
    }
}
int main(){
    cin >> n >> k;
    dem = 0;
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    thu(0);
    cout << dem << endl;
}