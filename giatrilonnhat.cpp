#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long s = 0;
    for (int i = 1; i<= n; i++){
        long long x;
        cin >> x;
        s += x + abs(x);
    }
    cout << s;

}