class NumArray {
public:
    const int M = 1e9+7;
    vector<int> prefixSumArr;
    NumArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
        int sum = 0;
            for(int j=0;j<=i;j++){
                sum = sum + nums[j];
            }
            prefixSumArr.push_back(sum);
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