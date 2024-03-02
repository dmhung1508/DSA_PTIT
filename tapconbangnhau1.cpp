#include <bits/stdc++.h>
using namespace std;

vector<int> a;
bool ok;
int n, tong;

void thu(int i, int s) {
    if (i == n || ok || s == tong / 2) {
        if (s == tong / 2) ok = true;
        return;
    }
    if (s + a[i] <= tong / 2) {
        // Nhánh cận tránh TLE
        thu(i + 1, s + a[i]);
    }
    thu(i + 1, s);
}


int main() {
  int t;
  cin >> t;
  while (t--) {
    ok = false;
    cin >> n;
    a.clear();  
    tong = 0; 
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      a.push_back(x);
      tong += x;
    }
    if (tong % 2 == 1)
      cout << "NO";
    else {
      thu(0, 0);
      if (ok)
        cout << "YES";
      else
        cout << "NO";
    }
    cout << endl;
  }
  return 0;
}