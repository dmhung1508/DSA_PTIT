#include <bits/stdc++.h>
using namespace std;
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}
int main(){
    faster();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        stack<int> st;
        for (int i =1; i<=n; i++){
            int s;
            cin >> s;
            
            int res = 1;
            if (!st.empty()){
                stack<int> q = st;
                while (!q.empty() && q.top() <= s){
                    q.pop();
                    res++;
                }

            }
            cout << res << " ";
            st.push(s);

        }
        cout << endl;
    }
}