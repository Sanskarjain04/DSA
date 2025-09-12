class Solution {
private:
    int solve(vector<int>& height,int left,int right){
        if (left >= right) return 0;

        int area = (right - left) * min(height[left], height[right]);

        if (height[left] < height[right]) {
            return max(area, solve(height, left + 1, right));
        } else {
            return max(area, solve(height, left, right - 1));
        }
    }
public:
    int maxArea(vector<int>& height) {
        return solve(height, 0, height.size() - 1);
    }
};