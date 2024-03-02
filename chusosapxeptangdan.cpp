#include <bits/stdc++.h>
using namespace std;
long long  f[101], a[11];
int MOD = 1e9+7;
void prepare(){

    for (int i = 1; i <= 10; ++i)
        a[i] = 1;
    f[1] = 10;
    for (int i = 2; i <= 100; ++i) {
        for (int j = 1; j <= 9; ++j) {
            long long s = 0;
            for (int k = j; k <= 9; ++k)
                s += a[k];
            a[j] = s;
            f[i] = (f[i] + s) % MOD;
        }
    }
    for (int i = 2; i <= 100; ++i) {
        f[i] = (f[i] + f[i - 1]) % MOD;
    }
}
int main(){
    prepare();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
}