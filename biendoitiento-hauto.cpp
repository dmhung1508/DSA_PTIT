#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string s; cin >> s;
        stack<string> st;
        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                string x = st.top(); st.pop();
                string y = st.top(); st.pop();
                string z = x + y + string(1, s[i]);
                st.push(z);
            }
            else st.push(string(1, s[i]));
        }
        cout << st.top()<< endl;

    }
}