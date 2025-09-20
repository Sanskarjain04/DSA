class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int> st(nums.begin(), nums.end());
        vector<int> ans;
        int count = 0;

        for(auto it = st.rbegin(); it != st.rend() && count < k; ++it) {
            ans.push_back(*it);
            count++;
        }
        return ans;
    }
};