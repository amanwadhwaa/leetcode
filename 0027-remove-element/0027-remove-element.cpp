class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l =0;
        int k=0;
        int r = nums.size()-1;
        while(l<=r){
            if(nums[r] == val){
                k++;
                r--;
                continue;
            }
            if(nums[l] == val){
                swap(nums[l] , nums[r]);
                
            }
            l++;
        }
        return nums.size() - k;
    }
};