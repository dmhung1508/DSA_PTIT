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
        string res=s;
        reverse(res.begin(),res.end());
        next_permutation(s.begin(), s.end());
        cout << n << " ";
        if (s==res) cout << "BIGGEST";
        else cout << s << endl;
    }
}