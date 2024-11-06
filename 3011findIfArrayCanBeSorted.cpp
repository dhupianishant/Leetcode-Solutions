class Solution {
public:
    static bool canSortArray(vector<int>& nums) {
        int previousMax = 0;
        int currentMin = 0, currentMax = 0;
        int previousSetBits = 0;

        for (auto x: nums) {
            const int currentSetBits = __builtin_popcount(x);

            if (previousSetBits == currentSetBits) {
                currentMin = min(currentMin, x);
                currentMax = max(currentMax, x);
            }
            else {
                if (currentMin < previousMax) {
                    return false;
                }

                previousMax = currentMax;
                currentMin = currentMax = x;
                previousSetBits = currentSetBits;
            }
        }

        return currentMin >= previousMax;  
    }
};