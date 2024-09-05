class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (m*n != original.size()) {
            return {};
        }

        vector <vector<int>> ans(m);

        for (int i = 0; i < m; i++) {
            ans[i] = vector<int>(original.begin() + i*n, original.begin() + (i+1)*n);
        }
        return ans;
    }
};

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();