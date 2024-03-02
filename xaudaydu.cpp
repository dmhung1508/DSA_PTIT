#include <iostream>
#include <unordered_set>
using namespace std;

bool canTransformToFullString(const string& s, int K) {
    unordered_set<char> charSet;
    for (char c : s) {
        charSet.insert(c);
    }

    int requiredChars = 26 - charSet.size();
    return requiredChars <= K;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int K;
        cin >> K;

        if (canTransformToFullString(s, K)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}