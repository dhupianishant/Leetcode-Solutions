class Solution {
private:
    void solve(string digit, int index, string s, vector<string> &ans, string mapping[]){
        
        // if index is out or range, i.e number greater than 9 which is not present on keypad
        if (index >= digit.length()) {
            ans.push_back(s);
            return;
        }

        // getting the first number from the input string digits
        // converting string to int gets me the ASCII value of the number, to get the integer equivalent it has to be subtracted from '0', i.e. ASCII value of 0 to get the integer equivalent.
        int number = digit[index] - '0';
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++) {
            s.push_back(value[i]);
            solve(digit, index + 1, s, ans, mapping);
            s.pop_back();
        } 
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;

        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        if (digits.length() == 0) {
            return ans;
        }

        string s;
        int index = 0;
        solve(digits, index, s, ans, mapping);
        return ans;
    }
};