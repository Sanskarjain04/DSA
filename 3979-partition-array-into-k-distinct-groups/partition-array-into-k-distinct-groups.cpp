class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        map<int,int> count;
        if(nums.size()%k!=0){
            return false;
        }
        if(nums.size()==1 && k==1){
            return true;
        }
        int sizeOfDividedArray = nums.size()/k;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
            if(count[nums[i]]>sizeOfDividedArray){
                return false;
            }
        }
        return true;
    }
};