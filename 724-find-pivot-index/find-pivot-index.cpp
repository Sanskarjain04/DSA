class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int total = accumulate(nums.begin(),nums.end(),0);
        int leftsum = 0;
        for(int i=0; i<nums.size();i++){
            int rightsum = total - leftsum - nums[i];
            if(leftsum == rightsum){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};