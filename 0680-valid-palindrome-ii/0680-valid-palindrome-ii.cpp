class Solution {
public:
    bool isPalindrome(string s, int l, int r) {
        while(l < r) {
            if(!isalnum(s[l])) {
                l++;
                continue;
            }
            if(!isalnum(s[r])) {
                r--;
                continue;
            }
            if(tolower(s[l]) != tolower(s[r])) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        
        while(l < r) {
            if(!isalnum(s[l])) {
                l++;
                continue;
            }
            if(!isalnum(s[r])) {
                r--;
                continue;
            }
            

            if(tolower(s[l]) != tolower(s[r])) {
                // Try two options:
                // Option 1: Delete character at position l, check if rest is palindrome
                bool op1 = isPalindrome(s, l + 1, r);
                
                // Option 2: Delete character at position r, check if rest is palindrome
                bool op2 = isPalindrome(s, l, r - 1);
                
                // Return true if either option works
                return op1 || op2;
            }
            
            // Characters match, move both pointers
            l++;
            r--;
        }
        
           return true;
    }
};