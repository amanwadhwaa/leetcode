class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int ctr=0;
        int left = 0;
        double maxSum = INT_MIN;
        double sum = 0;
        for(int right = 0; right<nums.size() ; right++){
            if(ctr != k){
                
                sum += nums[right];
                ctr++;
                if(ctr == k){
                                maxSum = max(maxSum , sum);

                }
                continue;
                
            }
            sum += nums[right];
          //  cout << "size full , adding " << nums[right] <<endl;
            //cout << "removing "<< nums[left] <<endl;
            sum -= nums[left];
            left++;
            maxSum = max(maxSum , sum);

        }
         return max(sum/k,maxSum/k);

        }
    };

