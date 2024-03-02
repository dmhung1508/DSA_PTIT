#include <bits/stdc++.h>
using namespace std;
int dx[8]={-1,-1,-1, 0 , 0, 1, 1, 1};
int dy[8]={-1,0,1, -1, 1, -1, 0, 1};
int a[501][501];
int n,m;
void quet(int i,int j){
    a[i][j] = 0;
    for (int o = 0; o<8; o++){
        int x = i + dx[o];
        int y = j + dy[o];
        if (x>=0 && x<n && y>=0 && y<m && a[x][y] == 1){
            quet(x,y);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        cin >> n >> m;
        for (int i = 0; i<n; i++){
            for (int j = 0; j<m; j++){
                cin >> a[i][j];
            }
        }
        int dem = 0;
        for (int i = 0; i<n; i++){
            for (int j = 0; j<m; j++){
                if (a[i][j] == 1){
                    dem++;
                    quet(i,j);
                }
            }
        }
        cout << dem << endl;
    }
    return 0;
}