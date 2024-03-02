#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int t;
    cin >> t;
    while (t--){
        char c;
        cin >> c;
        
        if (c == 'q'){
            string k =s;
            int n,m;
            cin >> n >>m;
            reverse(k.begin()+n-1, k.begin()+m);
            if (k == s){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;

        }
        else {
            int n; 
            cin >> n;

            char k;
            cin >> k;
            s[n-1] =k;
        }
    }
}