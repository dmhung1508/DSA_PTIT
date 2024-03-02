#include <bits/stdc++.h>
using namespace std;
vector <int> a(201,0);
vector<int> prime;
void sieve(){
    a[0] = a[1] = 1;
    for (int i =2; i*i <=200; i++){
        if (a[i] == 0){
            for (int j = i*i; j<=200; j+=i){
                a[j] = 1;
            }
        }
    }
    for (int i =2; i<=200; i++){
        if (a[i] == 0) prime.push_back(i);
    }
}
vector <vector<int>> st;
int n,k;
void thu(int pos, int sum, vector<int> lst){
    if (lst.size() == n ){
        if (sum == k) st.push_back(lst);
        return;

    }
    for (int i = pos; i< prime.size(); i++){
        if (sum + prime[i] <= k){
            lst.push_back(prime[i]);
            thu(i+1,sum+prime[i],lst);
            lst.pop_back();
        }
        else return;
    }
}
int main(){
    int t;
    sieve();
    cin >> t;
    int p;
    while (t--){
        st.clear();
        cin >> n >> p >> k;
        int i = 0;
        for ( i = 0; i< prime.size(); i++){
            if (prime[i] > p){
                thu(i,0,{});
                break;
            }
        }
        
        cout << st.size() << endl;
        for (auto i: st){
            for (auto j: i) cout << j << " ";
            cout << endl;
        }
    }
}