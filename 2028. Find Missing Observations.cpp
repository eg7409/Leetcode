class Solution {
public:
    vector<int> missingRolls(vector<int>& v, int mean, int n) {
        int m = v.size();
        int sum = 0;
        
        for(int i=0;i<m;i++){
            sum += v[i];
        }
        
        int left = (mean*(n+m)) - sum;
        
        if((float)left/n > 6){
            return {};
        }
        
        int num = left/n;
        int rem = left%n;
        
        if(left <= 0 || num ==0){
            return {};
       }
        
       
        
        vector<int> ans(n,num);
        
        for(int i=0;i<n;i++){
            int t = min(6-ans[i],rem);
            ans[i] += t;
            
            rem -= t;
            
            if(rem==0){
                break;
            }
        }
        return ans;
    }
};
