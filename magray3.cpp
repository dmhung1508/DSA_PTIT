#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        string k = "";
        k.push_back(s[0]);
        for (int i =1; i< s.size(); i++){
            if (s[i]!= s[i-1]){
                k.push_back('1');
            }
            else k.push_back('0');
        }
        cout << k << endl;
    }
}