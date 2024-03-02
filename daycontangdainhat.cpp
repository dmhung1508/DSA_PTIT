#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    int a[t];
    for (int i =0; i<t; i++) cin>> a[i];
    int f[1001];
    memset(f, 0, sizeof(f));
    int res = 0;
    for(int i =0; i<t;i++){
        for(int j=0; j<i; j++){
            if (a[i] > a[j]){
                f[i] = max(f[i], f[j] +1);
                res = max(res, f[i]);
            }
        }
    }
    cout<< res+1<< endl;
}