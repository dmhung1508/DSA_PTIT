#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int k;
        cin >> k;
        string s;
        cin >> s;
        string res=s;
        for (int i =0; i <s.size(); i++){
            if (k ==0) break;
            res = s;
            char c = s[i];
            for (int j =i +1; j<s.size(); j++){
                c = max(c,s[j]);

            }
            if (c <= s[i]) continue;
            for (int j = i+1; j< s.size(); j++){
                if (s[j] == c){
                    string tmp = s;
                    swap(tmp[i],tmp[j]);
                    res = max(tmp,res);
                }
            }
            s = res;
            k--;
        }
        cout << s << endl;
    }
}