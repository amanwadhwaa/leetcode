class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        vector<int> v;
        int left = 0;
        double maxSum = INT_MIN;
        double sum = 0;
        for(int right = 0; right<nums.size() ; right++){
            if(v.size() != k){
                
                sum += nums[right];
                v.push_back(nums[right]);
                if(v.size() == k){
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

