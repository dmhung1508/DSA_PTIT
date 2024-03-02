#include <bits/stdc++.h>
using namespace std;
queue<int> st;
int ktra(int x){
    string s = to_string(x);
    set<char> q;
    for (int i = 0; i<s.size(); i++){
        q.insert(s[i]);
    }
    if (q.size() == s.size()) return 1;
    return 0;
}
void check(int l, int r){
    
    st.push(0);
    while (1){
        int s = st.front();
        st.pop();
        for (int i= 0; i<=5; i++){
            st.push(s*10+i);
        }
        if (st.front() > 100000) break;
    }
}
int main(){
    check(0,100000);
    int t;
    cin >> t;
    vector<int> a;
    while (!st.empty()){
        a.push_back(st.front());
        st.pop();
    }
    while (t--){
        int l,r;
        cin >> l >> r;
        int sum = 0;
        for(int i=0; i< a.size(); i++){
            if (a[i] >= l && a[i] <= r && ktra(a[i])){
                sum++;
                // cout << a[i] << endl;
            }
        }
        cout << sum << endl;
        
    }
}