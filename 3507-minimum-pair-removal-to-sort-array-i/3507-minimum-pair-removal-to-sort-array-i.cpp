class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int minSum=INT_MAX;
        int x,y;
        int numberOfOps=0;
        while(checkNonDecreasing(nums) != 0){
            for(int i =0 ; i < nums.size() -1 ; i++){
                if(minSum > nums[i]+nums[i+1]){
                    minSum = nums[i]+nums[i+1];
                    x=i;
                    y=i+1;
                }
            }
            cout << minSum << "\n";
            nums.erase(nums.begin()+x);
            nums.erase(nums.begin()+x);
            nums.insert(nums.begin() + x,minSum);
            minSum=INT_MAX;
            numberOfOps++;
        }
        return numberOfOps;
        

    
    }
    
    int checkNonDecreasing(vector<int>& nums){
        for(int i = 0 ; i<nums.size()-1 ; i++){
            if(nums[i+1]<nums[i]){
                return 1;
            }
        }
        return 0;
    }
};