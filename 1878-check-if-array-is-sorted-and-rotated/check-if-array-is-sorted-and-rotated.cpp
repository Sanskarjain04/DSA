class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int last = nums.size()-1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }

        if(nums[last]>nums[0]){
            count++;
        }

        if(count>1){
            return false;
        }
        return true;
    }
};