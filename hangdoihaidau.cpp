#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    deque<int> st;
    for (int i=1;i<=t; i++){
        string s;
        cin >> s;
        if (s == "PUSHFRONT"){
            int x;
            cin >> x;
            st.push_front(x);
        }
        if (s == "PRINTFRONT"){
            if (!st.empty()) cout << st.front() << endl;
            else cout << "NONE" << endl;
        }
        if (s == "POPFRONT"){
            if (!st.empty()) st.pop_front();
        }
        if (s == "PUSHBACK"){
            int x;
            cin >> x;
            st.push_back(x);
        }
        if (s == "PRINTBACK"){
            if (!st.empty()) cout << st.back() << endl;
            else cout << "NONE" << endl;
        }
        if (s == "POPBACK"){
            if (!st.empty()) st.pop_back();
        }

    }
}