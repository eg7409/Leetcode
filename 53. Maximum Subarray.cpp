class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int n = v.size();
        
        int maxSoFar=v[0],maxEndingHere=v[0];
        
        for(int i=1;i<n;i++){
            maxEndingHere = max(maxEndingHere+v[i],v[i]);
            maxSoFar = max(maxEndingHere,maxSoFar);
        }
        
        return maxSoFar;
    }
};
