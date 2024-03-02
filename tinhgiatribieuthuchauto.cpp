#include <bits/stdc++.h>
using namespace std;

int calculate(int x, int y, char o) {
    switch (o) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            return 0; // Trường hợp không xử lý được
    }
}
void testCase() {
    string s; cin >> s;
    stack<int> st;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            int y = st.top(); st.pop();
            int x = st.top(); st.pop();
            int z = calculate(x, y, s[i]);
            st.push(z);
        }
        else st.push(s[i] - '0');
    }
    cout << st.top();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}