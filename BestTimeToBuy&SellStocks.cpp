class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int difference=0;
        int maxDifference=0;
        for(int i=1;i<n;i++){
            difference+=prices[i]-prices[i-1];
            maxDifference=max(difference,maxDifference);
            if(difference<0){
                difference=0;
            }
        }
        return maxDifference;
    }
};
