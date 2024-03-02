#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n; cin >> n;
        stack<string> st;
        queue<string> q;
        q.push("");
        while (!q.empty()) {
            string s = q.front();
            q.pop();
            st.push(s);

            if (s.length() == n) continue;
            q.push(s + "6");
            q.push(s + "8");
        }
        vector<string> p;
        while (!st.empty()) {
            if (st.top() != "")p.push_back(st.top());
            st.pop();
        }
        cout << p.size() << endl;
        for (int i=0; i< p.size(); i++){
            cout << p[i] << " ";
        }
        cout << endl;

    }
}