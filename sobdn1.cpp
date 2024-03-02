#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int res = 0;
        queue<string> st;
        st.push("1");
        while (!st.empty()){
            string z = st.front();
            st.pop();
            res++;
            string x = z+"0";
            if (x.length() > s.length() || (x.length() == s.length() && x > s))
                break;
            st.push(x);
            x = z+"1";
            if (x.length() > s.length() || (x.length() == s.length() && x > s))
                break;
            st.push(x);
        }
        cout << res+ st.size() << endl;
    }
}