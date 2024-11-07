class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int largestCombination = 0;

        for (int i = 0; i < 31; i++) {
            int count = 0;
            for (auto x: candidates) {
                if (x & (1 << i)) {
                    count++;
                }
            }
            largestCombination = max(largestCombination, count);
        }

        return largestCombination;
    }
};