#include <bits/stdc++.h>

class Solution {
public:
    int candy(vector<int>& ratings) {
    int sizeRatings = ratings.size();
    vector<int> candiesArray(sizeRatings, 1);

       for (int i = 1; i < sizeRatings; i++) {
        if (ratings[i] > ratings[i-1]) {
            candiesArray[i] = candiesArray[i-1] + 1;
        }
       }

       for (int i = sizeRatings-2; i >= 0; i--) {
        if (ratings[i] > ratings[i+1]) {
            candiesArray[i] = max(candiesArray[i], candiesArray[i+1] + 1);
        }
       }

       long totalCandies = accumulate(candiesArray.begin(), candiesArray.end(), 0);

       return totalCandies;
    }
};