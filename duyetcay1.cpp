#include<bits/stdc++.h>
using namespace std;
int search(int *M, int n, int x){
    for (int i = 0; i< n; i++){
        if (M[i] == x) return i;
    }
    return -1;
}
void duyet(int *M, int n, int *N){
    int x = search(M,n,N[0]);
    if (x!= 0) duyet(M,x,N+1);
    if (x!= n-1) duyet(M+x+1,n-x-1,N+x+1);
    cout << N[0] << " ";
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int M[n], N[n];
        for (int i = 0; i< n; i++){
            cin >> M[i];
        }
        for (int i = 0; i< n; i++){
            cin >> N[i];
        }
        duyet(M,n,N);
        cout << endl;
    }
    return 0;
}