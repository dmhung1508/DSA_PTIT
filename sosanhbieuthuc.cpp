#include <bits/stdc++.h>
using namespace std;
string solve(string s){
    stack<int> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') {
            st.push(i);
        } else if (s[i] == ')') {
            if (st.top() != 0 && s[st.top() - 1] == '-') {
                for (int j = st.top(); j < i; ++j) {
                    if (s[j] == '+')
                        s[j] = '-';
                    else if (s[j] == '-')
                        s[j] = '+';
                }
            }
            st.pop();
        }
    }
    string res = "";
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != '(' && s[i] != ')') {
            res += s[i];
        }
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        string s,t;
        cin >> s >> t;
        // cout << solve(s) << endl;
        // cout << solve(t) << endl;
        if (solve(s) == solve(t)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}