class Solution {
private:
    void solve(vector<vector<int>>& arr, vector<int> nums,int index){
        if(index>=nums.size()){
            arr.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            solve(arr,nums,index+1);
            swap(nums[index],nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> arr;
        vector<int> output;
        int index = 0;
        solve(arr,nums,index);
        return arr;
    }
};