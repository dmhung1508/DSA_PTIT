#include <iostream>
#include <string>
#include <algorithm>

void testCase() {
    int d;
    std::cin >> d;
    std::string s;
    std::cin >> s;

    int dd[127] = {};
    int maxx = 0;
    for (char i : s) {
        dd[i]++;
        maxx = std::max(maxx, dd[i]);
    }

    int maxGroupLength = (s.length() + d - 1) / d;  // Độ dài tối đa của mỗi nhóm
    if (maxx <= maxGroupLength)
        std::cout << 1;
    else
        std::cout << -1;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int T = 1;
    std::cin >> T;
    while (T--) {
        testCase();
        std::cout << "\n";
    }
    return 0;
}