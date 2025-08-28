class Solution {
private:
    int GCD(int sumOdd,int sumEven){
        int GCD = 1;
        int minNum = min(sumOdd,sumEven);

        for(int i=1;i<=minNum;i++){
            if(sumOdd%i==0 && sumEven%i==0){
                GCD = max(GCD,i);
            }
        }
        return GCD;
    }
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;

        for(int i=1;i<n*2;i=i+2){
            sumOdd+=i;
        }
        for(int i=2;i<=n*2;i=i+2){
            sumEven+=i;
        }

        int ans = GCD(sumOdd,sumEven);
        return ans;
    }
};