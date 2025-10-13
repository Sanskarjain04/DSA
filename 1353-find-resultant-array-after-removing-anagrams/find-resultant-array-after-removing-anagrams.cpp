class Solution {
private:
    bool compareStrings(string &curr,string &prev){
        bool ans = true;
        for(int i=0;i<curr.size();i++){
            if(curr[i]!=prev[i]){
                ans = false;
            }
        }
        return ans;
    }
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> sorted;
        for(auto str:words){
            sort(str.begin(),str.end());
            sorted.push_back(str);
        }
        for(int i=1;i<words.size();i++){
            if(sorted[i].size()!=sorted[i-1].size()){
                continue;
            }
            bool ans = compareStrings(sorted[i],sorted[i-1]);
            if(ans){
                words.erase(words.begin()+i);
                sorted.erase(sorted.begin() + i);
                i--;
            }
        }
        return words;
    }
};