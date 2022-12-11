class Solution_VER0 {
public:
    int maxProfit(vector<int>& prices) {
        int r=prices.size()-1;
        int l=0;
        int profit;
        int max_profit=0;

        for(int i=r; i>=l; i--){
            for(int j=l; <=i;j++){
                profit=prices[i]-prices[j];
                if(profit>max_profit){max_profit=profit;}
            }
        }
        return max_profit;
    }
};
//TC:O(N^2)
//SC:O(1)