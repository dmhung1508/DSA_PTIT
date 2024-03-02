#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int a,b;
        cin >> a >> b;
        int e=a, f= b;
        while (b!=0 ){
            int c = b;
            b = a%b;
            a = c;
        }
        cout << a << endl;
        cout << e*f/a << endl;
    }
    
}