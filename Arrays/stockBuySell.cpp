class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0 ;
        int j=1 ;

        int profit = 0 ;
        int pmaxi = 0 ;

        int n = prices.size() ;

        while (j<n) {
            if (prices[j]>prices[i]){
                profit = prices[j]-prices[i] ;
                pmaxi = max(profit, pmaxi) ;
                j++ ;
            }
            else {
                i=j ;
                j++ ;
            }
        }
        return pmaxi ;
    }
};