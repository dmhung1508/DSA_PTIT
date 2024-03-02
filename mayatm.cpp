#include <bits/stdc++.h>
using namespace std;
int n,s;
vector<int> a;
int min1;
void thu(int dem, int q, int remain){
    if (remain <= 0  || q == n || dem >= min1){
        if (remain == 0){
            min1 = min(dem,min1);
        }
        return;

    }
    thu(dem,q+1,remain);
    thu(dem+1,q+1,remain-a[q]);
    

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        cin >> n >> s;
        a.resize(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        min1 = INT_MAX;
        thu(0,0,s);
        cout << (min1 != INT_MAX ? min1 : -1) << endl;
    }
}