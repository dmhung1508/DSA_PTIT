#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    long long f[100001] ={};
    for (int i = 0; i<= 100000; i++){
        f[i] = i;
        for (int j = 1; j<= sqrt(i) ; j++){
            f[i] = min(f[i], f[i-j*j] + 1);
        }

    }
    while (t--){
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
} 