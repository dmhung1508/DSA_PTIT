#include <bits/stdc++.h>
using namespace std;
int dp[30];
int n,s;
int min1;
void thu(int i, int value, int count){
    if (i==n || value >=s || count > min1 ){

        if (value == s){
            min1 = min(count,min1);
        }
        return;
    }
    thu(i+1,value,count);
    thu(i+1,value+dp[i],count+1);

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> s;
    min1 = INT_MAX;
    for (int i = 0; i < n; i++){
        cin >> dp[i];
    }
    thu(0,0,0);
    cout << (min1 != INT_MAX ? min1 : -1);
    
}
