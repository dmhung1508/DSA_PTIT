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
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}