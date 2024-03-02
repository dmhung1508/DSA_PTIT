#include <bits/stdc++.h>
using namespace std;
string check(int s,int n){
    string a = "1";
    for (int i =2; i<=n; i++ ){
        a = a+ '0';
    }
    s = s-1;
    for (int i =n-1; i>=0;i--){
        if (s>=9){
            a[i] = '9';
            s = s-9;
        }
        else{
            a[i] = s + a[i];
            s = 0;
        }
    }
    if (s>0) return "-1";
    return a;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int s,n;
        cin >> s >> n;
        cout << check(s,n) << endl;
    }
    return 0;
}