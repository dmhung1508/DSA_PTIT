#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int a[t+1][t+1] = {};
    cin.ignore();
    for (int i = 1; i<=t; i++){
        string s; getline(cin, s);
        stringstream ss(s);
        int x;
        while (ss >> x) {
            a[i][x] = 1;
            a[x][i] = 1;
        }
    }
    for (int i = 1; i <= t; i++){
        for (int j = 1; j <= t; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}