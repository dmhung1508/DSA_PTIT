#include <bits/stdc++.h>
using namespace std;
int a[501][501];
int vs[501][501];
int n,m,ok;
/*
1: phải
2. xuong
3. trai
*/
int check(int x, int huong){
    if (x== huong) return 0;
    return 1;
}
void thu(int i, int j, int dem,int huong){
    if (dem > 2) return;
    if (a[i][j] == 3){
        ok=1;
        return;
    }
    if (a[i+1][j] == 1 && !vs[i+1][j]) {
        vs[i+1][j] = 1;
        thu(i+1,j,dem+check(huong,1), 1);
    }
    if (a[i][j+1] == 1 && !vs[i][j+1]) {
        vs[i][j+1] = 1;
        thu(i,j+1,dem+check(huong,2), 2);
    }
    if (a[i-1][j] == 1 && !vs[i-1][j]) {
        vs[i-1][j] = 1;
        thu(i-1,j,dem+check(huong,3), 3 );
    }


}