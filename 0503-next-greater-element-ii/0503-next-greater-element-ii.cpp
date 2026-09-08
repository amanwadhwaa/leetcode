class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> res;
        for(int i = 0 ; i<nums.size() ; i++){
            int j=i+1;
            while(nums[j % nums.size()] <= nums[i]){
                j++;
                if(j%nums.size() == i){
                    break;
                }
            }
            if( j%nums.size()  == i){
                res.push_back(-1);
            }else{
                res.push_back(nums[j%nums.size()]);
            }


        }
        return res;
    }
};