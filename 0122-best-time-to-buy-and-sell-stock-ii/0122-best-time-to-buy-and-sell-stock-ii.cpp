class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int max=prices[0];
        int profit=0;
        if(prices.size()==1){
            return 0;
        }
        for(int i =0;i<prices.size()-1  ; i++){
            if(prices[i] <= min){
                min = prices[i];
            }  
            
            if(prices[i+1]>prices[i]){
                max=prices[i+1];
                if(i+1 == prices.size()-1){
                    profit += max-min;
                }
            }
            else{
                profit += prices[i]-min;
                min=prices[i];
            }
            
        }
        return profit;
    }
};