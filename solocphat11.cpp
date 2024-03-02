#include <bits/stdc++.h>
using namespace std;

vector<string> st;
int n;

void thu(string s){
    if (s.size() > n) return;
    st.push_back(s);
    thu(s + "6");
    thu(s + "8");
}

bool cmp(string &a, string &b){
    if (a.size() == b.size()){
        return a > b;
    }
    return a.size() > b.size();
}

int main(){
    int t;
    cin >> t;

    while (t--){
        cin >> n;
        st.clear();
        thu("6");
        thu("8");
        sort(st.begin(), st.end(), cmp);

        for (auto i : st){
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
