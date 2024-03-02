#include <bits/stdc++.h>
using namespace std;
long long cv(string a){
    stringstream ss;
    ss << a;
    long long x;
    ss >> x;
    return x;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s[n+1];
        stack<string> st;
        for (int i =1; i<=n; i++){
            cin >> s[i];
        }
        for (int i=n; i>=1; i--){
            if ( s[i] == "+" || s[i] == "-" || s[i] == "*" || s[i] == "/" ){
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                if (s[i] == "+"){
                    st.push(to_string(cv(a) + cv(b)));
                }
                else if (s[i] == "-"){
                    st.push(to_string(cv(a) - cv(b)));
                }
                else if (s[i] == "*"){
                    st.push(to_string(cv(a) * cv(b)));
                }
                else if (s[i] == "/"){
                    st.push(to_string(cv(a) / cv(b)));
                }
            }
            else{
                st.push(s[i]);
            }
            
        }
        cout << st.top() << endl;
    }
}