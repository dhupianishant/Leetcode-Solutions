class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        int count = 1;
        int n = word.size();

        char ch = word[0];

        for (int i = 1; i < n; i++) {
            if (word[i] == ch && count < 9) {
                count++;
            }
            else {
                ans.push_back(count + '0');
                ans.push_back(ch);
                ch = word[i];
                count = 1;
            }
        }
        ans.push_back(count + '0');
        ans.push_back(ch);

        return ans;
    }
};