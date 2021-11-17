class Solution {
public:
    int rob(vector<int>& v) {
        
        int n = v.size();
        
        if(n == 0){
            return 0;
        }
        
        if(n==1){
            return v[0];
        }
        
        vector<int> dp(n+2);
        
        dp[0] = v[0];
        dp[1] = v[1];
        
        for(int i=2;i<n;i++){
            dp[i] = max(dp[i-2]+v[i],dp[i-1]);
            dp[i-1] = max(dp[i-1],dp[i-2]);
        }
        
        return max(dp[n-1],dp[n-2]);
    }
};

/* another method  */

class Solution {
public:
    int rob(vector<int>& v) {
        
        
        
        int n = v.size();
        
        if(n==0){
            return 0;
        }
        if(n==1){
            return v[0];
        }
        
        int without = v[0],with = v[1];
        
        for(int i=2;i<n;i++){
            int temp = with;
            with = without + v[i];
            without = max(without,temp);
        }
        return max(with,without);
    }
};
