#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, bit[N];
void update(int i){
    while (i <=n){
        bit[i]++;
        i += i & -i;
    }
}
long long get(int u){
    long long sum = 0;
    while (u <=n){
        sum += bit[u];
        u -= u & -u;
    }
    return sum;
}
int dem()