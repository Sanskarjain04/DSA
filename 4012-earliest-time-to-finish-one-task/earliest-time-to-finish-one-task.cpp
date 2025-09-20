class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int shortestTime = 1e9;
        for(auto arr:tasks){
            shortestTime = min(shortestTime,(arr[0]+arr[1]));
        }
        return shortestTime;
    }
};