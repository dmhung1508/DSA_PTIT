#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string a,b;
        cin >> a >> b;
        long long n=0,m=0;
        for (int i =0; i<a.size(); i++){
            n = n*2 + (a[i]-'0');
        }
        for (int i =0; i<b.size(); i++){
            m = m*2 + (b[i]-'0');
        }
        cout << n*m << endl;

    }
}