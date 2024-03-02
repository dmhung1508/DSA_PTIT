#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,m,s;
        cin >> n >> m >> s;
        if (n < s || 6*(n-s) < s){
            cout  << "-1" << endl;
        }
        else{
            cout << ceil((float) m * s / n) << endl;
        }
    }
}