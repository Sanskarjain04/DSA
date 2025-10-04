class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int mini = 1e9;
        for(auto &arr:tasks){
            mini = min(mini,arr[0]+arr[1]);
        }
        return mini;
    }
};