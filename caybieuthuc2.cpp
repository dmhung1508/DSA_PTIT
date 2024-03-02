#include <bits/stdc++.h>
using namespace std;
int check(int a, char c, int b){
    if (c == '+'){
        return a+b;
    }
    if (c == '-'){
        return a-b;
    }
    if (c == '*'){
        return a*b;
    }
    if (c == '/'){
        return a/b;
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin,s);
        queue<int> st;
        for (int i= s.size()-1; i>=0; i--){
            if (s[i] == ' ') continue;
            if (isdigit(s[i])){
                string tmp ="";
                while (isdigit(s[i])){
                    tmp = s[i] + tmp;
                    i--;
                }
                st.push(stoi(tmp));
                continue;
            }
            int a = st.front();
            st.pop();
            int b = st.front();
            st.pop();
            int x = check(b,s[i],a);
            st.push(x);
            
        }
        cout << st.front() <<endl;
    }
}