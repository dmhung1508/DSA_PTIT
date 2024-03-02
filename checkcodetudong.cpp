// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n,m;
//     cin >> n >> m;
//     int a[m];
//     for (int i = 0; i<m; i++) cin >> a[i];
//     int j = 1;
//     vector <string> p;
//     pair<int,int> q[m];
//     for (int i =0; i<m; i++) q[i].first=q[i].second=0;
//     int i = 1;
//     q[1].first = a[0];
//     while (i < m){
//         while (a[i] == a[i-1]+1 && i < m) i++;
//         q[j].second = a[i-1];
//         j++;
//         if (i <m) q[j].first = a[i];
//         i++;
//     }
//     while (q[j].first == 0) j--;
//     cout << "Errors: ";
//     for (int i =1; i<=j; i++){
//         if (q[i].first != q[i].second && q[i].second != 0) {
//             string v= to_string(q[i].first);
//             string c = to_string(q[i].second);
//             cout << q[i].first << "-" << q[i].second;
//         }
//         else {
//             cout << q[i].first;
//         }
//         if (i <= j-2){
//             cout << ", ";
//         }
//         else {
//             if (i== j-1) cout << " and ";
//         }
//     }
//     cout << endl;
//     q[0].first=q[0].second=0;
//     cout << "Correct: ";
//     for (int i =1; i<j; i++){
//         int k = q[i].first-q[i-1].second;
//         if (k == 2){
//             cout << q[i].first-1;
//         }
//         else{
//             if (k > 2){
//                 cout << q[i].first-k+1 << "-" << q[i].first-1;
//             }
//         }
//         cout << " ";
//     }
// }
#include<bits/stdc++.h>
using namespace std;
long long max = 10001;
int n,k;

int q[100001],q2[100001],a[100001];
int dem = 1;
vector<string> p,p2;
vector<int> v2;
int main(){
    cin >> n >> k;
    for (int i = 1; i<=k; i++){
        cin >> a[i];
        if (q[a[i]-1] >0){
            q[a[i]-dem]++;
            dem++;
        }
        else dem=1;
        q[a[i]]++;
    }
    for (int i = 1; i<=n; i++){
        if (q[i] == 0){
            
            v2.push_back(i);
        }
    }
    cout << "Errors: ";
    for (int i = 1; i<=k; i++){
        if (q[a[i]] == 1){
            string s = to_string(a[i]);
            p.push_back(s);
        }
        else{
            if (q[a[i]] > 1){
                p.push_back(to_string(a[i]) +"-" + to_string(a[i]+q[a[i]]-1));
                for (int j=1; j<=q[a[i]]-1;j++){
                    q[a[i]+j] = 0;
                }
            }
        } 
    }
    for (int i = 0; i<p.size(); i++){
        cout << p[i];
        if (i < p.size()-2) cout << ", ";
        else{
            if (i == p.size()-2) cout << " and ";
        }
    }
    cout << endl;
    cout << "Correct: ";
    dem = 1;
    for (auto i = 0; i<= v2.size()-1; i++){
        if (q2[v2[i]-1] > 0){
            q2[v2[i]-dem]++;
            dem++;
        }
        else dem = 1;
        q2[v2[i]]++;
    }
    for(int i =1; i<=n; i++){
        if (q2[i] == 1){
            p2.push_back(to_string(i));
        }
        else{
            if (q2[i] > 1){
                p2.push_back(to_string(i) +"-" + to_string(i+q2[i]-1));
                for (int j=1; j<=q2[i]-1;j++){
                    q2[i+j] = 0;
                }
            }
        }
    }
    for (int i = 0; i<p2.size(); i++){
        cout << p2[i];
        if (i < p2.size()-2) cout << ", ";
        else{
            if (i == p2.size()-2) cout << " and ";
        }
    }
}