#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// ✅ 1. Brute Force Recursive
using namespace std;

// ✅ 1. Brute Force Recursive
int recursive(int idx, vector<int>& nums) {
    if (idx >= nums.size() - 1) return 0;
    int minJumps = INT_MAX;
    for (int i = 1; i <= nums[idx]; i++) {
        int jumps = recursive(idx + i, nums);
        if (jumps != INT_MAX)
            minJumps = min(minJumps, 1 + jumps);
    }
    return minJumps;
}

// ✅ 2. Memoization (Top-Down DP)
int memo(int idx, vector<int>& nums, vector<int>& dp) {
    if (idx >= nums.size() - 1) return 0;
    if (dp[idx] != -1) return dp[idx];

    int minJumps = INT_MAX;
    for (int i = 1; i <= nums[idx]; i++) {
        if (idx + i < nums.size()) {
            int nextJump = memo(idx + i, nums, dp);
            if (nextJump != INT_MAX)
                minJumps = min(minJumps, 1 + nextJump);
        }
    }
    return dp[idx] = minJumps;
}

// ✅ 3. Tabulation (Bottom-Up DP)
int tabulation(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n, INT_MAX);
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= nums[i] && i + j < n; j++) {
            dp[i + j] = min(dp[i + j], dp[i] + 1);
        }
    }
    return dp[n - 1];
}

// ✅ 4. Greedy (Optimal)
int greedy(vector<int>& nums) {
    int jumps = 0, farthest = 0, end = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
        farthest = max(farthest, i + nums[i]);
        if (i == end) {
            jumps++;
            end = farthest;
        }
    }
    return jumps;
}

int main() {
    vector<int> nums = {2, 3, 1, 1, 4};  // Example input

    cout << "1️⃣ Recursive (Brute Force): " << recursive(0, nums) << endl;

    vector<int> dp(nums.size(), -1);
    cout << "2️⃣ Memoization (Top-Down DP): " << memo(0, nums, dp) << endl;

    cout << "3️⃣ Tabulation (Bottom-Up DP): " << tabulation(nums) << endl;

    cout << "4️⃣ Greedy (Optimal): " << greedy(nums) << endl;

    return 0;
}
