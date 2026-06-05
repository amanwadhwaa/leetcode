class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i =0;i<nums.size(); i++){
            m[i] = nums[i];
        }

        for(int i= 0 ; i<nums.size() ; i++){
            int j = (i+k)%nums.size();
            nums[j] = m[i];
        }
        
    }
};