class Solution {
public:
    int deleteAndEarn(vector<int>& v) {
        
        int n = v.size();
        
        vector<int> f(10001);
        
        for(int i=0;i<n;i++){
            f[v[i]]++;
        }
        
        int s = 0;
        
        for(int i=0;i<10001;i++){
            f[i] = i * f[i];
            s = max(s,f[i]);
        }
       
        
        vector<int> dp(s+1);
        dp[0] = f[0];
        dp[1] = f[1];
        
        
        
        for(int i=2;i<=s;i++){
            dp[i] = max(dp[i-2] + f[i] , dp[i-1]);
            
        }
        
        
        
        return max(dp[s],dp[s-1]);
    }
};
