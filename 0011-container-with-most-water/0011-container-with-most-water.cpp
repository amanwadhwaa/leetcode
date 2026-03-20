class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = INT_MIN;
        int l=0;
        int r=height.size()-1;
        while(l<r){
            int area = (r-l) * min(height[l], height[r]);
            if(area > max){
                // cout << "r-l " << (r-l) << endl;
                // cout <<  "height[min(l,r)] -> " << height[min(l,r)]
                max=area;
            }
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return max;
    }
};