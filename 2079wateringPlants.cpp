class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int can = capacity;
        int steps = 0;
        
        for (int i = 0; i < plants.size(); i++) {
            if (plants[i] > can) {
                steps += 2 * i;
                can = capacity;
            }
            can -= plants[i];
            steps++;
        }
        return steps;
    }
};