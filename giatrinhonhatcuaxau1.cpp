#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int k;
        cin >> k;
        string s;
        int dd[1000]={};
        cin >> s;
        for (int i = 0; i<s.size(); i++){
            dd[s[i]]++;
        }
        priority_queue<int> pq;
        for (int i = 0; i<s.size(); i++){
            if (dd[s[i]]>0){
                pq.push(dd[s[i]]);
                dd[s[i]] = 0;
            }
        }
        while (k--){
            int x =pq.top();
            pq.pop();
            x--;
            pq.push(x);
        }
        long long ans = 0;
        while (!pq.empty()) {
            long long x = pq.top(); pq.pop();
            ans += x * x;
        }
        cout << ans << endl;
    }
}