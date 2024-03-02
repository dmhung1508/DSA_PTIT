#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        stack<string> st;
        for (int i = 0; i < s.size(); i++){
            string q = "";
            if (s[i] == '+' || s[i] == '/' || s[i] == '-' || s[i] == '*'){
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                q = b + "" + s[i] + "" + a;
                st.push(q);
            }
            else{
                q += s[i];
                st.push(q);
            }
        }
        cout << st.top() << endl;
    }
}