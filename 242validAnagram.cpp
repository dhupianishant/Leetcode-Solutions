#define fast_io \
    ios_base::sync_with_stdio(0);  \
    cin.tie(0); \
    cout.tie(0);

class Solution {
public:
    bool isAnagram(string s, string t) {
        fast_io;
        unordered_map<char, int> count;
        for (auto x: s) {
            count[x]++;
        }
        
        for (auto x: t) {
            count[x]--;
        }

        for (auto x: count) {
            if (x.second != 0) {
                return false;
            }
        }
        return true;
    }
};