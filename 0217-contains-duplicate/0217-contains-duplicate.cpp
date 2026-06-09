#include <algorithm>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i : nums){
            if(s.count(i) == 1){
                return true;
            }
            s.insert(i);

        }
        return false;
    }
};