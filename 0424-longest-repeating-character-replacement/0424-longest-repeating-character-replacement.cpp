class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26] = {0};
        int left=0;
        int maxFreq=0;
        int right;
        for(right = 0; right<s.size() ; right++){
            freq[s[right] - 'A']++;
            maxFreq = max(maxFreq , freq[s[right]-'A']);
            while((right-left+1) - maxFreq > k){
                freq[s[left] - 'A']--;
                left++;
            }
        }
        return max(maxFreq,right-left);
    }
};