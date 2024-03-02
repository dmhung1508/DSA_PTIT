#include <bits/stdc++.h>
using namespace std;
int check(string s, int n){
    int x = 0;
    for (int i =0; i<s.size(); i++){
        x= x*10 + s[i]- '0';
        x = x%n;
    }
    return x == 0;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        queue<string> st;
        st.push("9");
        while (1){
            string s = st.front();
            st.pop();
            if (check(s,n)){
                cout << s << endl;
                break;
            }
            st.push(s+"0");
            st.push(s+"9");
        }
    }
}