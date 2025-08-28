class Solution {
private:
    int GCD(int a,int b){
        if(b==0){
            return a;
        }
        return GCD(b,a%b);
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