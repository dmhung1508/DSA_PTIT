#include <bits/stdc++.h>
using namespace std;
int a[100];
int n;
int ok = 1;
bool cu(int n){
    if (n!= 5 && n != 1) return 1;
    return 0;
}
void check(){
    for (int i =0; i<n; i++){
        if (a[i] == 5 || a[i] == 1){
            if ((cu(a[i-1]) == 1 && cu(a[i+1]) == 1) && i!= 0 && i!= n-1 ) return;

        }

    }

    for (int i=0; i<n; i++){
        cout << (char)(a[i]+'A'-1);
    }
    cout << endl;
}
void next1(){
    int i = n-1;
    while (i>=0 && a[i] > a[i+1]) i--;
    if (i>=0){
        int k = n-1;
        while (a[i] > a[k]) k--;
        swap(a[i],a[k]);
        int l = i+1, r = n-1;
        while (l<=r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
    }
    else{
        ok = 0;
    }
}
int main(){
    char c;
    cin >> c;
    n = c-'A'+1;
    for (int i=0; i<n; i++){
        a[i] = i+1;
    }
    while (ok){
        check();
        next1();
    }
}