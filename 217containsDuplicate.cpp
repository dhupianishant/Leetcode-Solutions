class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> frequencyCount;
        for (auto x: nums) {
            frequencyCount[x]++;
        }

        for (auto &[i, c]: frequencyCount) {
            if (c >= 2){
                return true;
            }
        }
        return false; 
    }
};