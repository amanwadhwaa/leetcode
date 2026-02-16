class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int k=1;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]<=0){
                continue;
            }else{
                if(i>=1 && nums[i-1]==nums[i]){
                        continue;
                    }
                if(nums[i]==k){
        
                    k++;
                }else{
                    return k;
                }
            }
        }
        return k;
    }
};