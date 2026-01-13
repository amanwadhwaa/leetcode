#include <algorithm>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;        
        for(int i = 0 ; i< strs.size() ; i++){
            vector<string> anagrams;
            anagrams.push_back(strs[i]);
            for(int j= i+1 ; j<strs.size(); j++){
                if(isAnagram(strs[i],strs[j])){
                anagrams.push_back(strs[j]);
                strs.erase(strs.begin() + j);

            }
            }
            result.push_back(anagrams);
        }
        return result;
    }
};