#include <bits/stdc++.h>
using namespace std;
int test1(){
    int n,s;
    cin >> n >> s;
    pair<int, int> dp[n+1];

    while (s--){
        int x,y;
        cin >> x >> y;
        dp[x].first++;
        dp[y].second++;
    }
    for (int i =1; i<=n; i++){
        if (dp[i].first != dp[i].second ){
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        cout << test1() << endl;
    }

}