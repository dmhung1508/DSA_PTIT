#include<bits/stdc++.h>
using namespace std;
vector <int> a,b,c;
int n,k,ans = 0 ;
int check(vector<int> c){
    vector<int> b = c;
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        if(b[i]!=c[i]) return 0;
    }
    return 1;
}
void thu(int i){
    for (int j= b[i-1]+1; j<= n-k+i; j++){
        b[i] =j;
        c[i] = a[b[i]];
        if(i==k) ans+=check(c);
        else thu(i+1);
    }
}
int main(){
    cin >> n >> k;
    a.resize(n+1);
    b.resize(k+1,0);
    c.resize(k+1,0);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    thu(1);
    cout << ans;
    return 0;
}