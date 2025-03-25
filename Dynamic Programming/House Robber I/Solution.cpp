#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // 1️⃣ Brute Force Recursive
    int robBrute(vector<int>& nums, int i) {
        if (i >= nums.size()) return 0;
        int rob = nums[i] + robBrute(nums, i + 2);
        int skip = robBrute(nums, i + 1);
        return max(rob, skip);
    }

    // 2️⃣ Top-Down (Memoization)
    int robTopDown(vector<int>& nums, int i, vector<int>& dp) {
        if (i >= nums.size()) return 0;
        if (dp[i] != -1) return dp[i];
        int rob = nums[i] + robTopDown(nums, i + 2, dp);
        int skip = robTopDown(nums, i + 1, dp);
        return dp[i] = max(rob, skip);
    }

    // 3️⃣ Bottom-Up (Tabulation)
    int robBottomUp(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        vector<int> dp(n);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n; i++) {
            dp[i] = max(nums[i] + dp[i - 2], dp[i - 1]);
        }
        return dp[n - 1];
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 9, 3, 1};

    // 1️⃣ Brute Force
    int bruteAns = sol.robBrute(nums, 0);
    cout << "Brute Force Result: " << bruteAns << endl;

    // 2️⃣ Top-Down Memoization
    vector<int> dp(nums.size(), -1);
    int topDownAns = sol.robTopDown(nums, 0, dp);
    cout << "Top-Down Memoization Result: " << topDownAns << endl;

    // 3️⃣ Bottom-Up Tabulation
    int bottomUpAns = sol.robBottomUp(nums);
    cout << "Bottom-Up Tabulation Result: " << bottomUpAns << endl;

    return 0;
}
