class Solution {
private:
    bool f(int ind,int target,vector<int> &arr,vector<vector<int>> &dp){
    if(target == 0) return true;
    if(ind == 0) return (arr[0]==target);

    if(dp[ind][target]!=-1) return dp[ind][target];

    bool notTake = f(ind-1,target,arr,dp);
    bool take = false;
    if(arr[ind]<=target) take = f(ind-1,target-arr[ind],arr,dp);

    return dp[ind][target] = take | notTake;
}
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
        }
        if(totalSum % 2) return false;
        int target = totalSum/2;
        vector<vector<bool>> dp(n,vector<bool>(target+1,0));
        for(int i=0;i<n;i++) dp[i][0] = true;
        if(nums[0] <= target) dp[0][nums[0]] = true;


        for(int i=1;i<n;i++){
        for(int j = 1;j<=target;j++){
            bool notTake = dp[i-1][j];
            bool take = false;
            if(nums[i]<=j) take = dp[i-1][j-nums[i]];
            dp[i][j] = take | notTake;
        }
    }
    return dp[n-1][target];
    }
};