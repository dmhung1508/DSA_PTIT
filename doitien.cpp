#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int a[11];
    a[1] = 1;
    a[2] = 2;
    a[3] = 5;
    a[4] = 10;
    a[5] = 20;
    a[6] = 50;
    a[7] = 100;
    a[8] = 200;
    a[9] = 500;
    a[10] = 1000; 
    while (t--){
        long long n, sum=0 ;
        cin >> n;
        for(int i = 10; i>=1; i--){
            sum += n/a[i];
            n = n%a[i];
        }
        cout << sum << endl;
    }
}