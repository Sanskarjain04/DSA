class Solution {
public:
    vector<bool> subsequenceSumAfterCapping(vector<int>& nums, int k) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        vector<vector<bool>> dp(n + 1, vector<bool>(k + 1, false));

        for (int i = 0; i <= n; i++) dp[i][0] = true;

        for (int i = 1; i <= n; i++) {
            for (int sum = 0; sum <= k; sum++) {
                dp[i][sum] = dp[i - 1][sum];
                if (sum >= nums[i - 1]) {
                    dp[i][sum] = dp[i][sum] || dp[i - 1][sum - nums[i - 1]]; 
                }
            }
        }

        vector<bool> ans(n, false);

        for (int cap = 1; cap <= n; cap++) {
            auto it = lower_bound(nums.begin(), nums.end(), cap);
            int idx = it - nums.begin();
            int maxUse = n - idx; 

            for (int cnt = 0; cnt <= maxUse; cnt++) {
                int remain = k - cnt * cap;
                if (remain >= 0 && dp[idx][remain]) {
                    ans[cap - 1] = true;
                    break;
                }
            }
        }

        return ans;
    }
};