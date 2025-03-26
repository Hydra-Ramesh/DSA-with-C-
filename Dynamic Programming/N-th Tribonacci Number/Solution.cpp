#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 1️⃣ Brute Force (Recursive) - Exponential Time
int tribonacciBrute(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    return tribonacciBrute(n - 1) + tribonacciBrute(n - 2) + tribonacciBrute(n - 3);
}

// 2️⃣ Memoization (Top-Down DP)
int triboMemoHelper(int n, vector<int>& dp) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    if (dp[n] != -1) return dp[n];
    return dp[n] = triboMemoHelper(n - 1, dp) + triboMemoHelper(n - 2, dp) + triboMemoHelper(n - 3, dp);
}

int tribonacciMemo(int n) {
    vector<int> dp(n + 1, -1);
    return triboMemoHelper(n, dp);
}

// 3️⃣ Tabulation (Bottom-Up DP)
int tribonacciTabu(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = dp[2] = 1;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    return dp[n];
}

// 4️⃣ Space Optimization (O(1) Space)
int tribonacciSpaceOpt(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    int a = 0, b = 1, c = 1, d;
    for (int i = 3; i <= n; i++) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return c;
}

// ✅ Main function to print all solutions
int main() {
    int n = 25;  // Test value

    cout << "Brute Force: " << tribonacciBrute(n) << endl;
    cout << "Memoization: " << tribonacciMemo(n) << endl;
    cout << "Tabulation: " << tribonacciTabu(n) << endl;
    cout << "Space Optimized: " << tribonacciSpaceOpt(n) << endl;

    return 0;
}
