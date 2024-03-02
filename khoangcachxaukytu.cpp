#include<bits/stdc++.h>
using namespace std;
set<string> st;
int check(string a, string b){
    queue<pair<string,int>> dp;
    dp.push({a,1});
    if (a == b) return 0;
    while (1){
        pair<string,int> s = dp.front();
        dp.pop();
        
        for (int i =0; i< s.first.size(); i++){
            string q = s.first;
            for (char j= 'A'; j<= 'Z'; j++){
                q[i] = j;
                
                if (st.find(q)!= st.end()){
                    if (q==b) return s.second+1;
                    dp.push({q,s.second+1});
                    st.erase(q);
                }

            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        string a,b;
        cin >> n >> a >> b;
        st.clear();
        for (int i=1; i<=n; i++){
            string k;
            cin >> k;
            st.insert(k);
        }
        cout << check(a,b) << endl;
    }
}