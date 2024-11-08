class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maxBit) {
        int n = nums.size();
        int xorOP = nums[0];
        int maxXor = pow(2, maxBit) - 1;

        for (int i = 1; i<n; i++) {
            xorOP ^= nums[i];
        }

        vector<int> result(n);

        for (int i = 0; i<n; i++) {
            result[i] = xorOP ^ maxXor;
            xorOP ^= nums[n - 1 - i];
        }

        return result;
    }
};