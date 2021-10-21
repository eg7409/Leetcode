class Solution {
public:
    int rob(vector<int>& v) {
        
        int n = v.size();
        
        if(n==1){
            return v[0];
        }
        
        vector<int> dp(n+1);
        
        dp[0] = 0;
        dp[1] = v[0];
        
        for(int i=2;i<n;i++){
            dp[i] = max(dp[i-2] + v[i-1],dp[i-1]);
        }
        
        
        vector<int> a(n+1);
        a[0] = 0;
        a[1] = v[1];
        
        for(int i=2;i<n;i++){
            a[i] = max(a[i-2] + v[i],a[i-1]);
        }
        
        
        return max(dp[n-2],max(dp[n-1],max(a[n],a[n-1])));
    }
};
