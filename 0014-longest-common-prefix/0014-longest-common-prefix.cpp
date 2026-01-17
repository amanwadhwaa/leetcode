class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        int leastSize=INT_MAX;
        for(string s:strs){
            if(s.size()<leastSize){
                leastSize=s.size();
            }
        }
        for(int i=0;i<leastSize ;i++){
            char temp=strs[0][i];
            for(string s:strs){
                if(temp==s[i]){
                    continue;
                }
                else{
                    return result;
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};