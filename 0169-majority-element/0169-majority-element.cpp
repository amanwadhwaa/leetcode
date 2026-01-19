class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> m;
        for(int i =0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int maxFreq=INT_MIN;
        int maxEle;
        for(auto it = m.begin() ; it!= m.end() ; it++){
            if(it->second >maxFreq){
                maxFreq=it->second;
                maxEle=it->first;
            }
        }
        return maxEle;
    }
};