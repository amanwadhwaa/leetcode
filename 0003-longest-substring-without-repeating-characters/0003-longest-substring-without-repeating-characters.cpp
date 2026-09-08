class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() < 1){
            return s.size();
        }
        unordered_map<char,int> lastSeen;
        int maxLen=INT_MIN;
        int start =0;
        int curLen =0;
        for(int i =0 ; i< s.size() ; i++){
            if(lastSeen.count(s[i]) && lastSeen[s[i]] >= start){
                start = lastSeen[s[i]]+1;
                curLen = i - start + 1;
            }else{
                curLen++;
            }
            maxLen = max(maxLen, i - start + 1);

            lastSeen[s[i]] = i;
        }
        return maxLen;
    }
};