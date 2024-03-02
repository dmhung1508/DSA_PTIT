#include <bits/stdc++.h>
using namespace std;

int tinh(int x, int y, char dau) {
    switch (dau) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            return 0; 
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s; 
        cin >> s;
        stack<int> st;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                int y = st.top(); st.pop();
                int x = st.top(); st.pop();
                int z = tinh(x, y, s[i]);
                st.push(z);
            }
            else st.push(s[i] - '0');
        }
        cout << st.top() << endl;;
    }
    return 0;
}