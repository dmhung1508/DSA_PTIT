#include<bits/stdc++.h>
using namespace std;
int x[]={-2,-1,1,2,2,1,-1,-2};
int y[]={-1,-2,-2,-1,1,2,2,1};
int check(string s, string t){
    queue<pair<string,int>> st;
    map<string,int> mp;
    if (s== t) return 0;
    st.push({s,0});
    mp[s] = 1;
    while (1){
        pair<string,int>  k = st.front();
        st.pop();
        char i = k.first[0];
        char j = k.first[1];
        for (int u = 0; u<8; u++){
                char x1 = i+x[u];
                char x2 = j+y[u];
                string tmp = "";
                tmp += x1;
                tmp+= x2;
                if (x1 >= 'a' && x1 <= 'h' && x2 >='1' && x2 <= '8' && !mp[tmp]){
                    if (x1 ==t[0] && x2 == t[1]){
                        return k.second+1;
                    }
                    else {
                        mp[tmp]  = 1;
                        st.push({tmp, k.second+1});
                    }
                }
            
        }

    } 
}
int main(){
    int t;
    cin >> t;
    while (t--){
        string a,b;
        cin >> a >> b;
        cout << check(a,b) << endl;
    }
}