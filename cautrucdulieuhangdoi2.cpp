#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    queue<int> st;
    for (int i =1; i<=n;i++){
        string s;
        cin >> s;
        if (s == "PUSH"){
            int x;
            cin >> x;
            st.push(x);
        }
        if (s == "POP"){
            if (!st.empty()) st.pop();
        }
        if (s == "PRINTFRONT"){
            if (!st.empty()) cout << st.front() << endl;
            else cout << "NONE" << endl;
        }
    }
}