class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> ans;
        sort(nums.rbegin(),nums.rend());

        for(int i=0;i<nums.size() && ans.size()<k;i++){
            if(ans.empty() || nums[i] != ans.back()){
                ans.push_back(nums[i]);
            }
        }
        return ans;
        }
};