#include <bits/stdc++.h>
using namespace std;
long long tinh(vector <int>a, vector<int> b, int n){
    long long ans = 0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    for(int i = 0; i < n; i++){
        ans += a[i]*b[i];
    }
    return ans;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        cout << min(tinh(a,b,n),tinh(b,a,n)) << endl;
    }
    return 0;
}