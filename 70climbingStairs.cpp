class Solution {
public:
    int climbStairs(int n) {
        // base case
        if (n == 0 || n == 1) {
            return 1;
        }

        // initialization of dp array, we used two ints to save memory
        int prev = 1, prev2 = 1;

        // traversing for all the steps
        for (int i = 2; i <= n; i++) {
            int current = prev + prev2;
            prev2 = prev;
            prev = current;
        }

        // prev would be the final answer containing all the possible ways   
        return prev;
    }
};