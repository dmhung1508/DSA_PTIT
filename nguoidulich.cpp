#include <bits/stdc++.h>
using namespace std;

int n;
int a[20][20], visited[20];
int ans;
int cmin;
void Try(int start, int cnt, int sum) {
    if(sum + (n-cnt+1) * cmin  >= ans) return;
    if(cnt == n) {
        ans = min(ans, sum + a[start][1]);
        return;
    }
    for(int i = 2; i <= n; i++) {
        if(!visited[i]) {
            visited[i] = 1;
            Try(i, cnt+1, sum + a[start][i]);
            visited[i] = 0;
        }
    }
}
int main(){
    cin >> n;
    cmin = ans = INT_MAX;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if(i != j) cmin = min(cmin, a[i][j]);
        }
    }
    visited[1] = 1;
    Try(1, 1, 0);
    cout<< ans;
    return 0;
}