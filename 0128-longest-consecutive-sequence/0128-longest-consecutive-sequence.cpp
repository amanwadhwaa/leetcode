class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size() == 0){
            return 0;
        }
        int prevEle = nums[0];
        int Cons=1;
        int maxCons=1;
        for(int i =1 ;i<nums.size() ; i++){
            if(nums[i] == prevEle + 1){
                Cons++;
                if(Cons > maxCons){
                    maxCons=Cons;
                }
            }
            else if(nums[i] == prevEle){
                continue;       
            }
            else{
                Cons=1;
            }
            prevEle = nums[i];
        }
        return maxCons;
    }
};