class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
        for (auto x: s) {
            if (temp.empty()) {
                temp.push(x);
            }
            else if (temp.top() == '(' and x == ')' ||
                     temp.top() == '{' and x == '}' ||
                     temp.top() == '[' and x == ']') {
                temp.pop();
            }
            else {
                temp.push(x);
            }
        }

        if (temp.empty()) {
            return true;
        }
        else {
            return false;
        }

    }
};