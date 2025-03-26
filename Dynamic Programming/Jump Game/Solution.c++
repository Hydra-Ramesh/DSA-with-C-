#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 1️⃣ Brute Force (Recursive)
bool bruteForce(int idx, vector<int>& nums) {
    if (idx >= nums.size() - 1) return true;
    for (int i = 1; i <= nums[idx]; i++) {
        if (bruteForce(idx + i, nums)) return true;
    }
    return false;
}

// 2️⃣ Memoization (Top-Down DP)
bool memoHelper(int idx, vector<int>& nums, vector<int>& dp) {
    if (idx >= nums.size() - 1) return true;
    if (dp[idx] != -1) return dp[idx];
    for (int i = 1; i <= nums[idx]; i++) {
        if (memoHelper(idx + i, nums, dp)) return dp[idx] = true;
    }
    return dp[idx] = false;
}

bool memoization(vector<int>& nums) {
    vector<int> dp(nums.size(), -1);
    return memoHelper(0, nums, dp);
}

// 3️⃣ Tabulation (Bottom-Up DP)
bool tabulation(vector<int>& nums) {
    int n = nums.size();
    vector<bool> dp(n, false);
    dp[n - 1] = true;

    for (int i = n - 2; i >= 0; i--) {
        int furthestJump = min(i + nums[i], n - 1);
        for (int j = i + 1; j <= furthestJump; j++) {
            if (dp[j]) {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[0];
}

// 4️⃣ Greedy
bool greedy(vector<int>& nums) {
    int goal = nums.size() - 1;
    for (int i = nums.size() - 2; i >= 0; i--) {
        if (i + nums[i] >= goal) {
            goal = i;
        }
    }
    return goal == 0;
}

// ✅ Main to run all approaches
int main() {
    vector<int> nums = {2, 3, 1, 1, 4};   // Change the input to test

    cout << "Brute Force: " << bruteForce(0, nums) << endl;
    cout << "Memoization: " << memoization(nums) << endl;
    cout << "Tabulation: " << tabulation(nums) << endl;
    cout << "Greedy: " << greedy(nums) << endl;

    return 0;
}
