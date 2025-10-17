class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        int left = 0;
        int right = 0;
        
        while(left<nums.size() && right<nums.size()){
            while(left<nums.size() && nums[left]<0){
                left++;
            }
            ans.push_back(nums[left]);
            left++;
            while(right<nums.size() && nums[right]>=0){
                right++;
            }
            ans.push_back(nums[right]);
            right++;
        }
        return ans;
    }
};