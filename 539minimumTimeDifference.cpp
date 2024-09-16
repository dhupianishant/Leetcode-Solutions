class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> timeInMinutes;

        for (auto x: timePoints) {
            int hour = stoi(x.substr(0, 2));
            int min = stoi(x.substr(3));
            timeInMinutes.push_back(hour*60 + min);
        }

        sort(timeInMinutes.begin(), timeInMinutes.end());

        int minDiff = INT_MAX;

        for (int i = 1; i < timeInMinutes.size(); i++) {
            minDiff = min(minDiff, timeInMinutes[i] - timeInMinutes[i-1]);
        }

        return min(minDiff, 1440 - timeInMinutes[timeInMinutes.size() - 1] + timeInMinutes[0]);
    }
};