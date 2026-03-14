class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1  = word1.size();
        int len2 = word2.size();
        string result;
        if(len1 <= len2){
            for(int i = 0 ; i<len1 ; i++){
                result += word1[i];
                result += word2[i];
            }
            for(int i = len1 ; i<len2 ;i++){
                result += word2[i];
            }
        }
        else{
             for(int i = 0 ; i<len2 ; i++){
                result += word1[i];
                result += word2[i];
            }
            for(int i = len2 ; i<len1 ;i++){
                result+= word1[i];
            }
        }
        return result;
    }
};