class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long int len = digits.size();
        long int i=len-1;
        while(i>=0 && digits[i] ==9){
        digits[i]=0;
        i-=1;
    }
    if(i<0){
        digits.insert(digits.begin(),1);
        return digits;
    }
    digits[i]++;
    return digits;
    
    }
};