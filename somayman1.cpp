#include <bits/stdc++.h>
using namespace std;
int check(string s){
    int ans = 0;
    for (int i = 0; i < s.size(); i++){
        ans += s[i]- '0';
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a = n/7;
        int b = n%7;
        while (b %4 != 0 && a > 0){
            a--;
            b += 7;
        }
        if (b % 4 == 0){
            
            for (int i = 0; i < b/4; i++){
                cout << 4;
            }
            for (int i = 0; i < a; i++){
                cout << 7;
            }
            cout << endl;
        }
        else cout << -1 << endl;
    }
}