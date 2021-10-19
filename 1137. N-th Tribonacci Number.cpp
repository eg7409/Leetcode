class Solution {

public:

int tribonacci(int n) {
    if(n==0){
        return 0;
    }
    if(n == 1 || n == 2){
        return 1;
    }
    
    return solve(0,1,1,1,n-2);
}

int solve(int t0,int t1,int t2,int c,int n){
    if(c == n){
        return (t1+t2+t0);
    }
    
    return solve(t1,t2,(t0+t1+t2),c+1,n);
 }
};


---> Another approach  


class Solution {
public:

int tribonacci(int n) {
    vector<int> dp(n+3);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    
    for(int i=3;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    return dp[n];
 }
};
