#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int i =0; i<n; i++) cin >> a[i];
        sort(a,a+n);
        int mid = n/2 -1;
        int l=mid, r= n-1;
        int ans = n;
        while (l>=0){
            if ( a[r] >= 2*a[l]){
                ans--;
                r--;
                l--;
            }
            else{
                l--;

            }
        }
        cout << ans << endl;
    }
}