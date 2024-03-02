#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        stack<int> st;
        st.push(-1);
        int max = 0;
        for (int i =0; i<s.size();i++){
            if (s[i] == '('){
                st.push(i);
            }
            else{
                st.pop();
                if (!st.empty()){
                    if (i - st.top() > max) max = i - st.top();
                }
                else st.push(i);
            }

        }
        cout << max << endl;

    }
}