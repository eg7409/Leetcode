class Solution {
public:
    int minCostClimbingStairs(vector<int>& v) {
        
        int n = v.size();
        
        for(int i=2;i<n;i++){
            v[i] += min(v[i-1],v[i-2]);
        }
        
        return min(v[n-1],v[n-2]);
    }
};


/*------------------------------*/


class Solution {
public:
    int minCostClimbingStairs(vector<int>& v) {
        
        int n = v.size();
        
        vector<int> dp(n+2,0);
        dp[0] = 0;
        dp[1] = v[0];
        
        for(int i=2;i<=n;i++){
            dp[i] = min(dp[i-1] , dp[i-2]) + v[i-1];
        }
        
        dp[n+1] = min(dp[n] , dp[n-1]);
        
        return dp[n+1];
    }
};
