#include <bits/stdc++.h>
using namespace std;
vector<int> a,b;
vector<bool> vs;
vector<int> ham;
void check(int s){
    int x = s;
    if (x%3 ==0 ){
        ham.push_back(x);
    }
}
void thu(int i){
    for (int j = 0; j< a.size(); j++){
        if (vs[j] == false){
            vs[j] = true;
            b.push_back(a[j]);
            if (i == a.size() - 1){
                int sum = 0;
                for (int k = 0; k< b.size(); k++){
                    sum = sum*10 + b[k];
                }
                check(sum);
            }
            else thu(i+1);
            vs[j] = false;
            b.pop_back();
        }
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        ham.clear();
        a.clear();
        b.clear();
        vs.clear();
        for (int i = 0; i< n; i++){
            int x;
            cin >> x;
            a.push_back(x);
            vs.push_back(false);
        }
        sort(a.begin(), a.end());
        thu(0);
        if (ham.size() == 0){
            cout << -1 << endl;
        }
        else{
            sort(ham.begin(), ham.end());
            cout << ham[ham.size() - 1] << endl;
        }
    }
}