#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // 1️⃣ Brute Force (Recursive)
    int brute(vector<int>& nums, int index, int end) {
        if (index > end) return 0;
        int rob = nums[index] + brute(nums, index + 2, end);
        int skip = brute(nums, index + 1, end);
        return max(rob, skip);
    }

    // 2️⃣ Top-Down (Memoization)
    int topDown(vector<int>& nums, int index, int end, vector<int>& dp) {
        if (index > end) return 0;
        if (dp[index] != -1) return dp[index];
        int rob = nums[index] + topDown(nums, index + 2, end, dp);
        int skip = topDown(nums, index + 1, end, dp);
        return dp[index] = max(rob, skip);
    }

    // 3️⃣ Bottom-Up (Tabulation)
    int bottomUp(vector<int>& nums, int start, int end) {
        int n = end - start + 1;
        if (n == 0) return 0;
        if (n == 1) return nums[start];

        vector<int> dp(n);
        dp[0] = nums[start];
        dp[1] = max(nums[start], nums[start + 1]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(nums[start + i] + dp[i - 2], dp[i - 1]);
        }
        return dp[n - 1];
    }

    // 4️⃣ Space Optimized
    int spaceOptimized(vector<int>& nums, int start, int end) {
        int prev2 = 0, prev1 = 0;
        for (int i = start; i <= end; i++) {
            int curr = max(nums[i] + prev2, prev1);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }

    // Main call to execute all approaches
    void solve(vector<int>& nums) {
        int n = nums.size();
        cout << "Array: ";
        for (auto num : nums) cout << num << " ";
        cout << "\n";

        // 1️⃣ Brute Force
        int b1 = brute(nums, 0, n - 2);
        int b2 = brute(nums, 1, n - 1);
        cout << "Brute Force Result: " << max(b1, b2) << endl;

        // 2️⃣ Top-Down
        vector<int> dp1(n, -1), dp2(n, -1);
        int t1 = topDown(nums, 0, n - 2, dp1);
        int t2 = topDown(nums, 1, n - 1, dp2);
        cout << "Top-Down Result: " << max(t1, t2) << endl;

        // 3️⃣ Bottom-Up
        int bu1 = bottomUp(nums, 0, n - 2);
        int bu2 = bottomUp(nums, 1, n - 1);
        cout << "Bottom-Up Result: " << max(bu1, bu2) << endl;

        // 4️⃣ Space Optimized
        int so1 = spaceOptimized(nums, 0, n - 2);
        int so2 = spaceOptimized(nums, 1, n - 1);
        cout << "Space Optimized Result: " << max(so1, so2) << endl;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {2, 3, 2};
    vector<int> nums2 = {1, 2, 3, 1};
    vector<int> nums3 = {1, 2, 3};

    cout << "=== Test Case 1 ===\n";
    sol.solve(nums1);

    cout << "\n=== Test Case 2 ===\n";
    sol.solve(nums2);

    cout << "\n=== Test Case 3 ===\n";
    sol.solve(nums3);

    return 0;
}
