#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        set<int> S;
        for (int i=1; i<=n; i++){
            int n1,n2;
            char c;
            cin >> n1 >> n2 >> c;
            S.insert(n1);
            S.insert(n2);

        }
        for (auto i:S){
            cout << i << " ";
        }
        cout << endl;
    }
}