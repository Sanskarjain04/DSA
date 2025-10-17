class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;
        
        // Step 1: Split into positives and negatives
        for (int n : nums) {
            if (n > 0) pos.push_back(n);
            else neg.push_back(n);
        }

        // Step 2: Merge alternately
        vector<int> ans;
        for (int i = 0; i < pos.size(); i++) {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }

        return ans;
    }
};