class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;

        // Sort the array
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            // Skip the same elements to avoid duplicates in the result
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int target = -nums[i];
            int front = i + 1;
            int back = nums.size() - 1;

            while (front < back) {
                int sum = nums[front] + nums[back];

                if (sum < target) {
                    front++;
                } else if (sum > target) {
                    back--;
                } else {
                    vector<int> triplet = {nums[i], nums[front], nums[back]};
                    result.push_back(triplet);

                    // Skip the same elements to avoid duplicates in the result
                    while (front < back && nums[front] == triplet[1]) {
                        front++;
                    }
                    while (front < back && nums[back] == triplet[2]) {
                        back--;
                    }
                }
            }
        }

        return result;
    }
};
