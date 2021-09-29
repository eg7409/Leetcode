class Solution {
public:
    int coinChange(vector<int>& v, int target) {
        int n = v.size();
        
        vector<int> dp(target+1,INT_MAX);
        
        dp[0] = 0;
        
        for(int i=1;i<=target;i++){
            for(auto c : v){
                if(i-c>=0 && dp[i-c]!=INT_MAX){
                    dp[i] = min(dp[i],dp[i-c]+1);
                }
            }
        }
        
        if(dp[target]==INT_MAX){
            return -1;
        }
        return dp[target];
    }
};
