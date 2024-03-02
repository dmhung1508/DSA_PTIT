#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin>> s;
        stack<char> st;
        bool ok= true;
        for (int i =0; i< s.size(); i++){
            if (s[i] == '{' || s[i] == '[' || s[i] == '('){
                st.push(s[i]);
            }
            else{
                if (st.empty()){
                    cout << "NO" << endl;
                    ok = false;
                    break;
                }
                else{
                    if (s[i] == '}'){
                        if (st.top() == '{') st.pop();
                        else{
                            cout << "NO" << endl;
                            ok = false;
                            break;
                        }
                    }
                    else if (s[i] == ']'){
                        if (st.top() == '[') st.pop();
                        else{
                            cout << "NO" << endl;
                            ok = false;
                            break;
                        }
                    }
                    else if (s[i] == ')'){
                        if (st.top() == '(') st.pop();
                        else{
                            cout << "NO" << endl;
                            ok = false;
                            break;
                        }
                    }
                }
            }
        }
        if (ok){
            if (st.empty()) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}