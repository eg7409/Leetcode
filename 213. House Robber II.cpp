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

/* Another Method*/

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
        if(n==2){
            return max(v[0],v[1]);
        }
        
        if(n==3){
            return max(v[0],max(v[1],v[2]));
        }
        int without = v[0],with = v[1];
        
        for(int i=2;i<n-1;i++){
            int temp = with;
            
            with = max(without + v[i], with);
            without = max(without,temp);
        }
        
        
             int q1 = v[1] , q2 = v[2];
            
            for(int i=3;i<n;i++){
                int t = q2;
                q2 = max(q1+v[i],q2);
                q1 = max(t,q1);
            }
        
        
        return max(max(with,without),max(q1,q2));
    }
};
