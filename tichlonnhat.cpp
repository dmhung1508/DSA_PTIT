#include <bits/stdc++.h>
using namespace std;
int  main(){
    int t;
    cin >> t;
    int a[t];
    for (int i=0; i<t; i++){
        cin >> a[i];
    }
    sort(a,a+t);
    int res[4];
    res[0]= a[0]*a[1];
    res[1]= a[0]*a[1]*a[t-1];
    res[2]= a[t-1]*a[t-2];
    res[3]= a[t-1]*a[t-2]*a[t-3];
    cout << *max_element(res,res+4);
}