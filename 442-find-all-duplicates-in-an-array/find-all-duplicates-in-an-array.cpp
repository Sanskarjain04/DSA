class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    vector<int> duplicates;
    
    int count = 0;
    for(int i = 0; i < nums.size() - 1; i++) {
        if(nums[i] == nums[i+1]) {
            count++;
        } else {
            if(count > 0) {
                duplicates.push_back(nums[i]);
            }
            count = 0;
        }
    }
    if(count > 0) {
        duplicates.push_back(nums[nums.size() - 1]);
    }

    return duplicates;
    }
};