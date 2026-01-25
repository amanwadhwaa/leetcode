#include <algorithm>
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1){
            return 0;
        }
        int minDiff=INT_MAX;
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i<nums.size()-k+1 ; i++){
            vector<int> x;
            for(int j=i;j<i+k;j++){
                x.push_back(nums[j]);
            }
            auto it = max_element(x.begin() , x.end());
            int max = *it;
            cout << max;
            it = min_element(x.begin() , x.end());
            int min=*it;
            if ((max-min) < minDiff){
                minDiff=max-min;
            }
        }
        return minDiff;                

        
    }
};