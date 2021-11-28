class Solution {
public:
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCost, vector<int>& colCost) {
        
        int n = rowCost.size();
        int m = colCost.size();
        
        int sum = 0;
        
        if(startPos[0] < homePos[0]){
            
            int curr = startPos[0];
            while(curr<homePos[0]){
                curr++;
                sum += rowCost[curr];
            }
        }
        else{
            int curr = startPos[0];
            while(curr>homePos[0]){
                curr--;
                sum += rowCost[curr];
            }
        }
        
        if(startPos[1] < homePos[1]){
            int curr = startPos[1];
            while(curr<homePos[1]){
                curr++;
                sum += colCost[curr];
            }
        }
        else{
            int curr = startPos[1];
            while(curr>homePos[1]){
                curr--;
                sum += colCost[curr];
            }
        }
        return sum;
    }
};
