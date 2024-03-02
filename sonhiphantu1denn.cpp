#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        deque<string> st;
        int n;
        cin >> n;
        st.push_front("1");
        for (int i=1; i<=n; i++){
            string s = st.front();
            st.pop_front();
            cout << s << " ";
            st.push_back(s+"0");
            st.push_back(s+"1");
        }
        cout << endl;
    }
}