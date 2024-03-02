#include <bits/stdc++.h>
using namespace std;
vector <int> a;
int n;
void cook(){
    cout << "[";
    for (int i=0; i< a.size();i++){
        if (i != a.size() -1)  cout << a[i] << " ";
        else cout << a[i];
    }
    cout << "]" << endl;
}
void diqi(int n){
    if (n == 0) return ;
    cook();
    for (int i = 0; i<n; i++){
        a[i]= a[i] + a[i+1];

    }
    a.pop_back();
    diqi(n-1);
    
}

int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        a.resize(n);
        for (int i=0; i< n; i++) cin >> a[i];
        diqi(n);
    }
}   