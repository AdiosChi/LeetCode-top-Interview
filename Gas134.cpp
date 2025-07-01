class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int currentCost = 0;
        int sumCost = 0;
        int index = 0;
        for (int i = 0; i < gas.size(); i++) {
            currentCost += gas[i] - cost[i];
            sumCost += gas[i] - cost[i];
            if (currentCost < 0) {
                index = i + 1;
                currentCost = 0;
            }
        }
        if (sumCost < 0) return -1;
        else
            return index;


    }
};