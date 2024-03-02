#include <bits/stdc++.h>
using namespace std;
bool isok(string a, string b){
    int ans = 0;
    for (int i =0; i < b.size(); i++){
        if (a[ans] == b[i]) ans++;
    }
    if (ans == a.size()) return true;
    return false;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        long long s;
        cin >> s;
        int ans = 0;
        long long x = cbrt(s);
        for (int i = x; i>=1; i--){
            long long y = pow(i,3);
            if (isok(to_string(y), to_string(s))){
                cout << y << endl;
                ans = 1;
                break;
            }
        }
        if (ans == 0) cout << -1 << endl;

    }
}