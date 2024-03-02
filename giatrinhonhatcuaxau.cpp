#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char,int> dp;
        for (int i=0; i<s.size(); i++){
            dp[s[i]]++;
        }
        priority_queue<int> p;
        for (auto i:dp){
            p.push(i.second);
        }
        while (n--){
            int x = p.top();
            p.pop();
            x--;
            p.push(x);
        }
        long long ans = 0;
        while (!p.empty()){
            int x = p.top();
            p.pop();
            ans += x*x;
        }
        cout << ans << endl;
    }
}