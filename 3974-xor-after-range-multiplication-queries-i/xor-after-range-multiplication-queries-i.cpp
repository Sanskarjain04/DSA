class Solution {
public:
    int M = 1e9 + 7;
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int ans = 0;
        for(auto arr:queries){
           for(int i=arr[0];i<=arr[1];i=i+arr[2]){
            nums[i] = (1LL*nums[i]*arr[3])%M;
            } 
        }
        for(int i=0;i<nums.size();i++){
            ans = ans^nums[i];
        }
        return ans;
    }
};