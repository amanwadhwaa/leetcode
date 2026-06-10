class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int mProf=INT_MIN;
        int sell=INT_MIN;
        for(int i = 0 ; i<prices.size() ; i++){
           if(prices[i] < buy){
                buy = prices[i];
                sell = INT_MIN;
           }
           else if(prices[i] > sell){
                sell = prices[i];
                int profit = sell - buy;
                if(profit > mProf){
                    mProf = profit;
                }
           }   
        }
        if(mProf == INT_MIN){
            return 0;
        }
        return mProf;
    }
};