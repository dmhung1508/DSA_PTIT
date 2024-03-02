#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        priority_queue<int,vector<int>,greater<int>> a;
        for (int i=0; i<n; i++) {
            int k;
            cin >> k;
            a.push(k);
        }
        long long sum =0;
        while (a.size()>=2){
            int x = a.top(); a.pop();
            int y = a.top(); a.pop();
            sum += x+y;
            a.push(x+y);
        }
        cout << sum << endl;

    }
}