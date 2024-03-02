#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        queue<string> s;
        s.push("9");
        while (1){
            string tmp = s.front();
            s.pop();
            int res = 0;
            for (char i:tmp){
                res = res*10 + (i- '0');
                res = res % n;
            }
            if (res == 0){
                cout << tmp << endl;
                break;
            }
            s.push(tmp+"0");
            s.push(tmp+"9");
        }
    }
}