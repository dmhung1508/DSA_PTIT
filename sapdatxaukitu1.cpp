#include <iostream>
#include <string>
#include <cstring>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        std::string s;
        std::cin >> s;

        int dp[200];
        memset(dp, 0, sizeof(dp));

        int max = 0;
        for (char c : s) {
            dp[c - 'a']++;
            if (dp[c - 'a'] > max)
                max = dp[c - 'a'];
        }

        if (max > (s.size()+1) / 2)
            std::cout << "-1" << std::endl;
        else
            std::cout << "1" << std::endl;
    }

    return 0;
}