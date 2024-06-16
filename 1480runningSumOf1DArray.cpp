class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> prefixSum;
        int sum = 0;
        for (auto x: nums) {
            prefixSum.push_back(sum+=x);
        }
        return prefixSum;
    }
};