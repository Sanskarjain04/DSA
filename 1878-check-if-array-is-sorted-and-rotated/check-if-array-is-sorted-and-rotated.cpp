class Solution {
public:
    bool check(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                rotate(nums.begin(),nums.begin()+i,nums.end());
            }
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                return false;
            }
        }
        return true;
    }
};