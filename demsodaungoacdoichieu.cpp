#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>> t;
    cin.ignore();
    while (t--){
        stack<char> dt;
        string s;
        getline(cin, s);
        int open=0, close = 0;
        for (int i =0; i<s.size(); i++){
            if (s[i] == '('){
                dt.push(s[i]);
                open++;
            }
            else if (s[i] == ')'){
                if (dt.empty()){
                    dt.push(s[i]);
                    close++;
                }
                else if (dt.top() == '('){
                    dt.pop();
                    open--;
                }
                else {
                    dt.push(s[i]);
                    close++;
                }
            }
            
        }
        int ans = open/2 + close /2;
            ans += open%2 + close %2;
            cout<<ans<<endl;
    }
    return 0;
}