#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> mp(11);
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n+1);
        for (int i=1;i<=n;i++) cin >> a[i];
        mp[1].push_back("[");
        for (int j=1;j<=n;j++) {
            mp[1].push_back(to_string(a[j]));
            if (j!= n) mp[1].push_back(" ");
        }
        mp[1].push_back("[");
        int i=n-1;
        int k= 1;
        while (i>=1){
            k++;
            vector<int> b(i+1);
            mp[k].push_back("[");
            for (int j=1;j<=i;j++) {
                b[j] = a[j]+ a[j+1];
                mp[k].push_back(to_string(b[j]));
                if (j!= i) mp[k].push_back(" ");;
            }
            mp[k].push_back(" ");
            a = b;
            i--;
        }
        for (int i=1;i<=k;i++){
            for (auto x:mp[i]) cout << x;
            cout << endl;
        }

    }
}