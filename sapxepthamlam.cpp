#include <bits/stdc++.h>
using namespace std;
int check1(int a[], int n){
    for (int i =1; i<=n; i++){
        if (a[i] != i && a[i] != n-i+1) return 0;
        
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+1];
        for (int i =1; i<=n; i++) cin >> a[i];
        if (check1(a,n)){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
}