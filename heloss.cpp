#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int n = s.length();
        stack<int> st;
        for (int i=0; i<n; i++){
            if (s[i] == '('){
                st.push(i);
            }
            else if (s[i] == ')'){
                if (st.empty()){
                    s[i] = 'h';
                }
                else{
                    int x = st.top();
                    st.pop();
                    s[x] = '0';
                    s[i] = '1';
                }
            }
        }
        while (!st.empty()){
            int x = st.top();
            st.pop();
            s[x] = 'h';
        }
        for(int i =0; i<n; i++){
            if (s[i] == 'h'){
                cout <<"-1";
            }
            else{
                cout << s[i];
            }
        }
        cout << endl;
    }
}