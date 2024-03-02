#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while (t--){
        queue<pair<int,int>> st;
        map<int,bool> dp;
        int n,k;
        cin >> n >> k;
        st.push({n,0});
        dp[n] = true;
        while (!st.empty()){
            int x = st.front().first;
            int y = st.front().second;
            st.pop();
            if (x == k){
                cout << y << endl;
                break;
            }
            if (x - 1 == k || x*2 == k){
                cout << y + 1 << endl;
                break;
            }
            if (x*2 <= k*2 && dp[x*2 ] == 0){
                st.push({x*2,y+1});
                dp[x*2] = true;
            }
            if (x-1 >= 0 && dp[x-1] == 0){
                st.push({x-1,y+1});
                dp[x-1] = true;
            }
        }
    }
}