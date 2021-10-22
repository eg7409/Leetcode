class Solution {
public:
    
    
    string solve(int n){
        
        if(n==1){
            return "1";
        }
        
        string s = solve(n-1);
        
        string ans = "";
        int len = s.size();
        
        if(len == 1){
            ans = "1" + s;
        }
        
        int c = 1;
        
        for(int i=1;i<len;i++){
            if(s[i] == s[i-1]){
                c++;
            }
            else{
                ans += to_string(c);
                ans += s[i-1];
                c = 1;
            }
        }
        
        if(len > 1){
            ans += to_string(c);
            ans += s[len-1];
        }
        
        
        return ans;
    }
    
    string countAndSay(int n) {
        return solve(n);
    }
};
