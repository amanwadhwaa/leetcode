class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int maxProfit = 0;

        for(int price : prices) {
            buy = min(buy, price);
            maxProfit = max(maxProfit, price - buy);
        }

        return maxProfit;
    }
};