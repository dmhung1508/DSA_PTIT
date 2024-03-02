#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    while (n--){
        cin >> s;
        int len = s.length();
        for (int i = len-1; i>=0; i--){
            if ( s[i] == '1'){
                s[i] ='0';
                
            }
            else{
                s[i] = '1';
                break;
            }

        }
        cout << s << endl;
    }
}