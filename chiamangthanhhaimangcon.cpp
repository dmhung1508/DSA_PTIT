#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        int au = 0;
        if (k > n/2) au = k;
            else au= n-k;
        for(auto &i :a)cin>> i ;
        sort(a,a+n);
        int sum1=0,sum2=0;
        for (int i=n-1; i>=0; i--){
            if (i >= n-au){
                sum1+= a[i];
            }
            else sum2+= a[i];
        }
        cout << sum1-sum2<< endl;
    }
}