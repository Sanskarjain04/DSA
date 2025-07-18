class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else {
                if(count>max){
                    max=count;
                }
                count=0;
            }

            if(i==nums.size()-1 && count>max){
                max=count;
            }
        }
        return max;
    }
};