class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ctr=0;
        map<int,int> m;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=nums[i];
            m[sum]++;
            for(int j = i+1;j<nums.size() ; j++){
                sum+=nums[j];
                m[sum]++;
            }
        }
        for(auto it:m){
            if(it.first==k){
                return it.second;
            }
        }
        
        return 0;
    }
};