#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        queue <pair<int,int>> st;
        long long n;
        map<int,bool> dp;
        cin >> n;
        st.push({n,0});
        while (!st.empty()){
            long long x = st.front().first;
            long long y = st.front().second;
            st.pop();
            if (x==2){
                cout << y+1 << endl;
                break;
            }
            for (int i =2; i<= sqrt(x); i++){
                if (x%i == 0 && dp[x/i] == 0){
                    
                        st.push({x/i,y+1});
                        dp[x/i] = true;
                    
                }
            }
            st.push({x-1,y+1});
        }
    }
}