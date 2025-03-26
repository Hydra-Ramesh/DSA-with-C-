#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using namespace std;

// 1️⃣ Brute Force (Recursion)
int bruteForce(int i, int j, int m, int n) {
    if (i >= m || j >= n) return 0;
    if (i == m - 1 && j == n - 1) return 1;
    return bruteForce(i + 1, j, m, n) + bruteForce(i, j + 1, m, n);
}

// 2️⃣ Memoization (Top-Down DP)
int memo(int i, int j, int m, int n, vector<vector<int>>& dp) {
    if (i >= m || j >= n) return 0;
    if (i == m - 1 && j == n - 1) return 1;
    if (dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = memo(i + 1, j, m, n, dp) + memo(i, j + 1, m, n, dp);
}

// 3️⃣ Tabulation (Bottom-Up DP)
int tabulation(int m, int n) {
    vector<vector<int>> dp(m, vector<int>(n, 1));
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    return dp[m - 1][n - 1];
}

// 4️⃣ Space Optimization
int spaceOptimized(int m, int n) {
    vector<int> dp(n, 1);
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[j] += dp[j - 1];
        }
    }
    return dp[n - 1];
}

int main() {
    int m = 3, n = 3;

    cout << "Brute Force: " << bruteForce(0, 0, m, n) << endl;

    vector<vector<int>> dp(m, vector<int>(n, -1));
    cout << "Memoization: " << memo(0, 0, m, n, dp) << endl;

    cout << "Tabulation: " << tabulation(m, n) << endl;

    cout << "Space Optimized: " << spaceOptimized(m, n) << endl;

    return 0;
}
