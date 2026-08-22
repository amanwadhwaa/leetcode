class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        long long product =1;
        int temp=n;
        while(n>0){
            int rem = n%10;
            n=n/10;
            sum += rem;
            product *= rem;
        }
        if(temp % (sum + product )== 0){
            return true;
        }else{
            return false;
        }
        
    }
};