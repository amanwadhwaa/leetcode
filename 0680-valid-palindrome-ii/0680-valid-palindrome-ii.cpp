class Solution {
public:
    // Helper function to check if a substring (from index l to r) is a palindrome
    bool isPalindrome(string s, int l, int r) {
        while(l < r) {
            // Skip non-alphanumeric characters on the left
            if(!isalnum(s[l])) {
                l++;
                continue;
            }
            // Skip non-alphanumeric characters on the right
            if(!isalnum(s[r])) {
                r--;
                continue;
            }
            // Compare characters (case-insensitive)
            if(tolower(s[l]) != tolower(s[r])) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    
    // Main function to check if string can be palindrome by deleting at most one character
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        
        while(l < r) {
            // Skip non-alphanumeric on left
            if(!isalnum(s[l])) {
                l++;
                continue;
            }
            // Skip non-alphanumeric on right
            if(!isalnum(s[r])) {
                r--;
                continue;
            }
            
            // If characters don't match
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
        
        // If loop completes without mismatch, string is already a palindrome
        return true;
    }
};