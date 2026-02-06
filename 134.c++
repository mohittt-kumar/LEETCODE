class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas=0,totalcost=0;
        // int start;
        for(int i=0;i<gas.size();i++){
            totalgas+=gas[i];
        }
        for(int i=0;i<cost.size();i++){
            totalcost+=cost[i];
        }

        if(totalgas<totalcost)return -1;

        int start=0;
        int currgas=0;
        for(int i=0;i<gas.size();i++){
           currgas+=gas[i]-cost[i];
           if(currgas<0){
            start=i+1;
            currgas=0;
           }
        }return start;
    }
};


class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0;
        int currGas = 0;
        int start = 0;

        for (int i = 0; i < gas.size(); i++) {
            int tank = gas[i] - cost[i];
            totalGas += tank;
            currGas += tank;

            if (currGas < 0) {
                start = i + 1;
                currGas = 0;
            }
        }

        return totalGas >= 0 ? start : -1;
    }
};
