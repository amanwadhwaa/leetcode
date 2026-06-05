class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i =0;i<nums.size(); i++){
            m[i] = nums[i];
        }

        set<int> s;

        for(int i= 0 ; i<nums.size() ; i++){
            int j = (i+k)%nums.size();
            if(s.size() == nums.size()){
                break;
            }
            if(s.count(i)){
                continue;
            }
            s.insert(i);
            nums[j] = m[i];
        }
        
    }
};