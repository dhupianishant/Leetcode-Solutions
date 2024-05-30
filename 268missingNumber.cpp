class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n * (n + 1)) / 2;

        int vectorSum = 0;
        for (auto x: nums) {
            vectorSum += x;
        }

        return sum - vectorSum;
    }
};
