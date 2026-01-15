#include<map>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        vector<int> result;
        for (int i =0 ; i < nums.size() ; i++){
            freq[nums[i]]++;
        }
       while(k!=0){
        int maxFreq = INT_MIN;
        int maxFreqNum = INT_MIN;
        for(auto it:freq){
            if(it.second > maxFreq){
                maxFreq = it.second;
                maxFreqNum = it.first;
            }
        }
        result.push_back(maxFreqNum);
        freq.erase(maxFreqNum);
        k--;
       }
       return result;
    }
};