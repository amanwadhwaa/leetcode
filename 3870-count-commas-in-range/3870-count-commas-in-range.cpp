class Solution {
public:
    int countCommas(int n) {
        int temp = n; 
        int ans=0;
        int ctr=0;
        while(temp != 0){
            cout << temp << endl;
            int rem = temp%10;
            temp = temp /10;
            ctr++;
        }
        cout << ctr << endl;
        int x = ctr - 3;
        if( ctr <= 3){
            return 0;
        }
        if(x == 1){
            return n - 1000 + 1;
        }
        if(x == 2){
            return n - 10000 + 1 + 9000;
        }
        if(x==3){
            return n - 100000 + 1 + 99000;
        }
        return ans;
    }
};