#include <bits/stdc++.h>
using namespace  std;
string tong(string a,string b, int k){
    while (a.length() < b.length()){
        a = '0' + a;
    }
    while (b.length() < a.length()){
        b = '0' + b;
    }
    string c = "";
    int nho = 0;
    for (int i = a.size()-1; i >= 0; i--){
        int x = a[i] - '0';
        int y = b[i] - '0';
        int z = x + y + nho;
        c = char(z%k + '0') + c;
        nho = z/k;
    }
    if (nho > 0) c = '1' + c;
    return c;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        string a,b;
        cin >> k>>  a >> b;
        cout << tong(a,b,k) << endl;
    }
}