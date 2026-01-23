class Solution {
public:
    void sortColors(vector<int>& nums) {
        int x=0;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[x]==2){
                nums.push_back(2);
                nums.erase(nums.begin()+x);
                x--;
            }
            
            else if(nums[x]==0){
                nums.erase(nums.begin()+x);
                nums.insert(nums.begin(),0);
            }
            x++;
        }
    }
};