#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        queue<int> st;
        for (int i =1; i<=n; i++){
            int x;
            cin >> x;
            if (x == 3){
                int p;
                cin >> p;
                st.push(p);

            }
            if (x ==4){
                if (!st.empty()) st.pop();
            }
            if (x == 1) cout << st.size() << endl;
            if (x == 2){
                if (st.empty()) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
            if (x == 5){
                if (!st.empty()) cout << st.front() << endl;
                else cout << -1 << endl;
            }
            if (x == 6){
                if (!st.empty()) cout << st.back() << endl;
                else cout << -1 << endl;
            }
            
        }
    }
}