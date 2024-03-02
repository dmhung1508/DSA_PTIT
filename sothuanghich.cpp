#include <bits/stdc++.h>
using namespace std;
int caculatr(int x, int y, char o){
    switch (o){
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x*y;
        case '/':
            return x/y;
        default:
            return 0;
    }
}
void testCase(){
    string s; cin >> s;
    stack<int> st;
    for (int i = s.length()-1; i >= 0; i--) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            int x = st.top(); st.pop();
            int y = st.top(); st.pop();
            int z = caculatr(x, y, s[i]);
            st.push(z);
        }
        else st.push(s[i] - '0');
    }
    cout << st.top();
}
int main(){
    int t; cin >> t;
    while (t--){
        testCase();
        cout << endl;
    }
}