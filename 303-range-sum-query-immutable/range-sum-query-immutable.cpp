class NumArray {
public:
    const int M = 1e9+7;
    vector<int> prefixSumArr;
    NumArray(vector<int>& nums) {
        prefixSumArr.resize(nums.size());
        prefixSumArr[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            prefixSumArr[i] = prefixSumArr[i-1]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return prefixSumArr[right];
        }
        int sum = (prefixSumArr[right] - prefixSumArr[left-1]) % M;
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */