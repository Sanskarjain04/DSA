class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int mini=1e9;
        for(int i=0;i<tasks.size();i++){
            mini=min(tasks[i][0]+tasks[i][1],mini);
        }
        return mini;
    }
};