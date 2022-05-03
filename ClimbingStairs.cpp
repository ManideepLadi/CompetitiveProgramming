class Solution {
public:
    int dpClimbStairs(vector<int> &dp,int n){
        if(dp[n]!=-1){
            return dp[n];
        }
        else{
            dp[n]=dpClimbStairs(dp,n-1)+dpClimbStairs(dp,n-2);
            return dp[n];
        }
    }
    int climbStairs(int n) {
        vector<int> dp(100,-1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        return dpClimbStairs(dp,n);
    }
};
