class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int totalSum = (rolls.size() + n) * mean;
        int rollsSum = accumulate(rolls.begin(), rolls.end(), 0);
        int missingSum = totalSum - rollsSum;

        if (missingSum < n || missingSum > 6*n) {
            return { };
        }

        int distribution = missingSum / n;
        int remainingSum = missingSum % n;

        vector<int> ans(n, distribution);

        for (int i = 1; i <= remainingSum; i++) {
            ans[i]++;
        }

        return ans;
    }
};

auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();