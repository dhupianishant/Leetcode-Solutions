class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long chalksNeeded = 0;
        
        for (auto x: chalk) {
            chalksNeeded += x;
        }

        int chalksRemaining = k % chalksNeeded;

        for (int i = 0; i < chalk.size(); i++) {
            if (chalksRemaining < chalk[i]) {
                return i;
            }
            chalksRemaining -= chalk[i];
        }
        return 0;
    }
};

static const int kds = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();