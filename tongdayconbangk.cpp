#include <bits/stdc++.h>
using namespace std;
int a[100],b[100];
int n,m,k;
int ok = 1;
void ktao(){
    for (int i=1; i<=n; i++){
        a[i] = 0;
    }

}
void sinh(){
    int j=n;
    while (j>0 && a[j] == 1) j--;
    if (j>0){
        a[j] = 1;
        for (int i=j+1; i<=n; i++){
            a[i] = 0;
        }
    }
    else{
        for (int i=1; i<=n; i++){
            a[i] = 0;
        }
        ok = 0;
    }
}
int main(){
    int t;
    ktao();
    t = 1;
    int dem = 0;
    while (t--){
        cin>>n>>k;
        for (int i =1;i <=n; i++) cin>> b[i];
        while (ok){
            sinh();
            int sum = 0;
            for (int i=1; i<=n; i++){
                sum += a[i]*b[i];
                
            }

            if (s[i] == 1) cout<<b[i]<<" ";
                }
                cout << endl;
                dem++;
            }

        }
        cout << dem << endl;
    }
    return 0;
}