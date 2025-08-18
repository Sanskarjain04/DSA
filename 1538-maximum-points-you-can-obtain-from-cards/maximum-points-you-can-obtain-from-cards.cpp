class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftSum = 0, rightSum = 0, maxSum = 0;
        for(int i=0;i<k;i++){
            leftSum = leftSum + cardPoints[i];
        }
        maxSum = leftSum;
        int end = cardPoints.size()-1;
        int rightIndex = 0;
        for(int i=k-1;i>=0;i--){
            leftSum = leftSum - cardPoints[i];
            rightSum = rightSum + cardPoints[end-rightIndex];
            rightIndex++;
            maxSum = max(maxSum, leftSum+rightSum);
        }
        return maxSum;
    }
};