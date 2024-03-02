#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MOD = 1e9 + 7;
const int MAX_N = 105;
const int MAX_K = 50005;

int dp[MAX_N][MAX_K];

void init() {
    memset(dp, 0, sizeof(dp));

    // Các trường hợp cơ bản:
    for (int i = 1; i <= 9; ++i) {
        dp[1][i] = 1;
    }

    // Điền bảng dp:
    for (int i = 2; i < MAX_N; ++i) {
        for (int j = 0; j < MAX_K; ++j) {
            for (int k = 0; k <= 9; ++k) {
                if (j >= k) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % MOD;
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    init();

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        cout << dp[N][K] << endl;
    }

    return 0;
}