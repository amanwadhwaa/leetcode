class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3;
        for(int i = 0 ; i <m ; i++){
            nums3.push_back(nums1[i]);
        }
        int i = 0;
        int j = 0;
        for(int k = 0 ; k < (m+n) ; k++ ){
            if( j >= m){
                while( i<n){
                    nums1[k++] = nums2[i++];
                }
                break;
            }
            if(i >= n){
                while( j< m){
                    nums1[k++] = nums3[j++];
                }
                break;
            }
            if(nums2[i] > nums3[j]){
                nums1[k] = nums3[j++];
            }
            else if(nums2[i] <= nums3[j]){
                nums1[k] = nums2[i++];
            }
            
        }

        
    }
};