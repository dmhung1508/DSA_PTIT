#include <iostream>
using namespace std;

void ktao(int a[], int n) {
    for (int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}

void sinh(int a[], int n, bool& ok) {
    int i = n;
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
        --i;
    }
    if (i == 0) {
        ok = false;
    } else {
        a[i] = 1;
    }
}
int check(int a[], int n){
    int k = n/2;
    for(int i = 1; i <= k; i++){
        if(a[i] != a[n-i+1]){
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    cin >> n;
    int a[100];
    ktao(a, n);
    bool ok = true;
    while (ok) {
        if (check(a,n)){
            for (int i = 1; i <= n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        sinh(a, n, ok);
    }
    return 0;
}