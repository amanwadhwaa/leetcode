class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> v;
        map<int,bool> visited;
        for(int i =0;i<nums.size();i++){
            m[nums[i]]++;
            visited[nums[i]]=false;
        }
        for(int i =0;i<nums.size();i++){
            if(m[nums[i]] > nums.size()/3){
                if(visited[nums[i]]!=true){
                    v.push_back(nums[i]);
                    visited[nums[i]]=true;
                }
                
            }
        }
        return v;
    }
};