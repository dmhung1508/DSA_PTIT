#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);//cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        pair<int,int> a[n];
        for (int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
        sort(a,a+n, cmp);
        int ans = 1, last = a[0].second;
        for (int i=1;i<n;i++){
            if (a[i].first >= last){
                ans++;
                last = a[i].second;
                
                
            }
            
            
        }
        cout << ans << endl;
    }
}