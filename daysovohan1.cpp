#include <bits/stdc++.h>
using namespace std;
long long a[2][2],b[2][2];
long long mod = 1e9+7;
void nhan(long long a[2][2], long long b[2][2]){
    long long c[2][2];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            c[i][j] = 0;
            for(int k = 0; k < 2; k++){
                c[i][j] += a[i][k]*b[k][j] % mod;
            }
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++) a[i][j] = c[i][j]% mod;
    }
}
void luythua(long long a[2][2], long long n){
    if(n <= 1) return;
    luythua(a,n/2);
    nhan(a,a);
    if(n%2 == 1) nhan(a,b);
}
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        a[0][0] = 1; a[0][1] = 1; a[1][0] = 1; a[1][1] = 0;
        b[0][0] = 1; b[0][1] = 1; b[1][0] = 1; b[1][1] = 0;
        luythua(a,n-1);
        cout << a[0][0] << endl;
    }
    return 0;
}