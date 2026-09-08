class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        for(int i=0;i<nums2.size(); i++){
            m[nums2[i]] = i;
        }
        vector<int> res;
        for(int num : nums1){
            int idx = m[num];
            while(idx < nums2.size()-1){
                if(nums2[idx+1] > num){
                    res.push_back(nums2[idx+1]);
                    break;
                }
                idx++;
            }
            if(idx == nums2.size()-1){
                res.push_back(-1);
            }
        }
        return res;
    }
};