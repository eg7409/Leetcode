class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.length();
        map<int,int> m;
        
        int i=0,ans = 0;
        
        for(int j=0;j<n;j++){
            
            auto it = m.find(s[j]);
            
            if(it != m.end() && m[s[j]] >= i){
                ans = max(ans,j-i);
                i=m[s[j]]+1;
                m[s[j]] = j;
            }
            else{
                m[s[j]] = j;
                ans = max(ans,j-i+1);
            }
            
        }
        return ans;
    }
};
