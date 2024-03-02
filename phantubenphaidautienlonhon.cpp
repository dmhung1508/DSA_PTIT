#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n),v(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        stack<int> st;
        for (int i = n-1; i >= 0; --i){
            while (!st.empty() && st.top() <= a[i]) st.pop();
            if (st.empty()) v[i] = -1;
            else v[i] = st.top();
            st.push(a[i]);
        }
        for (int i = 0; i < n; ++i) cout << v[i] << " ";
        cout << endl;
    }
}