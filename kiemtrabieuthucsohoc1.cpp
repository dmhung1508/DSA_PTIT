#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin,s);
        stack<char>st;
        for (int i=0; i< s.size();i++){
            if (s[i] != ')'){
                st.push(s[i]);
            }
            else{
                int ok = 1;
                while (!st.empty()){
                    char a = st.top();
                    st.pop();
                    if ( a== '(') break;
                    if (a == '+' || a == '-' || a == '*' || a == '/') ok = 0;
                }
                if (ok == 1) {
                    cout << "Yes" << endl;
                    break;
                }
            }
        }
        if (!st.empty()) cout << "No" << endl;
    }
}