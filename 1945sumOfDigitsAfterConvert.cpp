class Solution {
public:
    int getLucky(string s, int k) {
        string number = "";
        for (auto x: s) {
             number += to_string(x -'a' + 1);
        }
        
        while (k > 0) {
            int temp = 0;
            for (auto x: number) {
                temp += x - '0';
            }
            number = to_string(temp);
            k--;
        }
        return stoi(number);   
    }
};

static const int kds = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();