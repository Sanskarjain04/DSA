class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int shortestTime = INT_MAX;
        for(auto arr:tasks){
            shortestTime = min(shortestTime,(arr[0]+arr[1]));
        }
        return shortestTime;
    }
};