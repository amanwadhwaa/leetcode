#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        int n = strs.size();
        vector<bool> used(n, false);   

        for (int i = 0; i < n; i++) {
            if (used[i]) continue;    

            vector<string> anagrams;
            anagrams.push_back(strs[i]);
            used[i] = true;

            for (int j = i + 1; j < n; j++) {
                if (!used[j] && isAnagram(strs[i], strs[j])) {
                    anagrams.push_back(strs[j]);
                    used[j] = true;    
                }
            }

            result.push_back(anagrams);
        }
        return result;
    }
};
