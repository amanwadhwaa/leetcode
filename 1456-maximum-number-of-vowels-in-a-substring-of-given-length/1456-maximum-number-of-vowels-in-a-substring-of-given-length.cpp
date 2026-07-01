class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0;
        int ctr=0;
        int vctr=0;
        int maxVctr=INT_MIN;
        for(int right  = 0; right < s.size() ; right++){
            if(ctr!= k){
                if(s[right] == 'a' || s[right] == 'e'|| s[right] == 'i' || s[right] == 'o' || s[right] == 'u'){
                    vctr++;
                  //  cout<<"vctr updated () " << s[right] <<endl;
                    maxVctr = max(maxVctr,vctr);
                }
             //   cout<<"added " << s[right] <<endl;
                       
                ctr++;
                continue;
            }
           // cout << "win full" << " removing " << s[left] <<endl; 
            if(s[left] == 'a' || s[left] == 'e'|| s[left] == 'i' || s[left]  =='o' || s[left] == 'u'){
                    vctr--;
                    //cout << "vctr decremented( )" <<endl;
                }
            left++;
            ctr--;
            if(s[right] == 'a' || s[right] == 'e'|| s[right] == 'i' || s[right] == 'o' || s[right] == 'u'){
                    vctr++;
                    //cout<<"vctr incremented () " << s[right] <<endl;
                    maxVctr = max(maxVctr,vctr);
                }
                //cout<<"added " << s[right] <<endl;         
                ctr++;
            
        }
            return max(maxVctr , vctr);

    }
};