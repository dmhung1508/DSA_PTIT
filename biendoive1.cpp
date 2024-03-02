#include <bits/stdc++.h>
using namespace std;
int min1 = 1e9;
int thu(int a,int dem){
    queue<pair<int,int>> q;
    q.push({a,dem});
    while (1){
        pair<int,int> s = q.front();
        q.pop();
        if (s.first == 1){
            min1 = min(min1,s.second);
            break;
        }
        if (s.first % 3 == 0){
            q.push({s.first/3,s.second+1});
        }
        if (s.first % 2 == 0){
            q.push({s.first/2,s.second+1});
        }
        q.push({s.first-1,s.second+1});
    }
    return min1;

}
void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    faster();
    int t;
    cin >> t;
    while (t--){
        int a;
        cin >> a;
        min1 = thu(a,0);
        cout << min1 << endl;
        min1 = 1e9;
    }
}