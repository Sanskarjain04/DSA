class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int x:nums){
            mp[x] = 1;
        }

        priority_queue<int> pq;

        for(auto &p:mp) pq.push(p.first);

        vector<int> ans;

        for(int i=0;i<k && !pq.empty();i++){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};