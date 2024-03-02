#include <bits/stdc++.h>
using namespace std;
vector <long long> a;
long long tong(int left, int right, int mid){
    long long sum =0;
    long long trai = LLONG_MIN, phai = LLONG_MIN;
    for (int i = mid; i >= left; i--){
        sum += a[i];
        trai = max(trai, sum);
    }
    sum = 0;
    for (int i = mid + 1; i <= right; i++){
        sum += a[i];
        phai = max(phai, sum);
    }
    //cout << left << " " << right << " " << trai + phai << endl;
    return trai + phai;
}
long long tach(int left, int right){
    if (left == right) return a[left];
    int mid = (left + right) / 2;
    long long x = tach(left, mid);
    long long y = tach(mid + 1, right);
    long long z = tong(left, right, mid);
    return max(max(x, y), z);
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        a.resize(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << tach(0, n - 1) << endl;
    }
    
    return 0;
}