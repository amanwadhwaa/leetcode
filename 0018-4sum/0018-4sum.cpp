class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums, long long target, int p) {
        set<vector<int>> s;

        for (int i = 0; i < nums.size() - 2; i++) {
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {

                long long sum = (long long)nums[i] + nums[j] + nums[k];

                if (sum == target) {
                    vector<int> temp = {p, nums[i], nums[j], nums[k]};

                    if (s.count(temp)) {
                        j++;
                        k--;
                        continue;
                    }

                    s.insert(temp);
                    j++;
                    k--;
                }
                else if (sum > target) {
                    k--;
                }
                else {
                    j++;
                }
            }
        }

        return vector<vector<int>>(s.begin(), s.end());
    }

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size() < 4) {
            return {};
        }

        sort(nums.begin(), nums.end());

        set<vector<int>> resSet;

        for (int i = 0; i < nums.size() - 3; i++) {

            vector<int> tempvec(nums.begin() + i + 1, nums.end());

            vector<vector<int>> tempRes =
                threeSum(tempvec, (long long)target - nums[i], nums[i]);

            for (const auto& vec : tempRes) {
                resSet.insert(vec);
            }
        }

        return vector<vector<int>>(resSet.begin(), resSet.end());
    }
};