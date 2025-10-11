class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = 1;
        vector<int> ans;
        while(left<right && right<nums.size()){
            if(nums[left]+nums[right]==target){
                ans = {left,right};
                break;
            }
            if(right==nums.size()-1){
                left++;
                right = left+1;
            }
            else{
                right++;
            }
        }
        
        return ans;
    }
};