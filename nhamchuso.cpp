#include<bits/stdc++.h>
using namespace std;
long long check6(string a){
    for (int i=0; i< a.size(); i++){
        if (a[i] == '5') a[i] = '6';
    }
    return stoll(a);
}
long long check5(string a){
    for (int i=0; i< a.size(); i++){
        if (a[i] == '6') a[i] = '5';
    }
    return stoll(a);
}
int main(){
    string a,b;
    cin >> a >> b;
    cout << check5(a)+check5(b) << " " <<  check6(a)+check6(b) << endl;
}