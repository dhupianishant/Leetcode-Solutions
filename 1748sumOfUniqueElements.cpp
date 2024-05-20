class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> countElems;
        for (auto x: nums) {
            countElems[x]++;
        }
        
        int sum = 0;

        for (auto x: countElems) {
            if (x.second == 1) {
                sum += x.first;
            }
        }
        return sum;  
    }
};