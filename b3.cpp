#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n],b[n],c[n];
    for (int i = 0; i<n; i++) cin >> a[i];
    for (int i = 0; i<n; i++) cin >> b[i];
    for (int i = 0; i<n; i++) cin >> c[i];
    sort(a,a+n);
    sort(b,b+n);
    sort(c,c+n);
    int i = 0,j = 0,k = 0,dem=0;
    while (i<n && j<n && k<n){
        if (a[i] < b[j] && b[j] < c[k]){
            dem++;
            i++; j++; k++;
        }
        else{
            if (a[i] >= b[j]) j++;
            else{
                if (b[j] >= c[k]) k++;
                else i++;
            }
        }
    }
    cout << dem;
}