class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        if(s.size() == 1){
            return 1;
        }
        int maxLen=0;
        int start =0;
        int i=0;
        for(i =0 ; i<s.size() ; i++){
            char c = s[i];
            if(m.count(c)){
                //cout<<mySet.size() << endl;
                if(i -start > maxLen){
                    maxLen = i-start;
                    cout << "updated maxLen = " << maxLen << endl;
                }
                if(m[c] < start ){
                   m[c] = i;
                   continue;
                }
                start = m[c] + 1;
                cout << "updated start = " << start <<endl;
            }
            m[c] = i;
            cout << "inserted: " << c << endl;
        }
        if( i-start > maxLen){
            maxLen = i -start;
        }
        return maxLen;

    }
};