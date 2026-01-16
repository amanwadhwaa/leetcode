class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len=nums.size();
        vector<int> answer(nums.size());
        vector<int> prefix(len);
        vector<int> suffix(len);

        int temp=1;
        for(int i=0; i<nums.size() ; i++){
            prefix[i]=temp;
            temp*=nums[i];
        }
        temp=1;
        for(int i=nums.size()-1; i>=0; i--){
            suffix[i]=temp;
            temp*=nums[i];
        }
        for(int i = 0 ; i<nums.size() ; i++){
            answer[i] = prefix[i]*suffix[i];
        }
        return answer;
    }
};