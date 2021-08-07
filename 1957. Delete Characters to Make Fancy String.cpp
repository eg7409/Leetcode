class Solution {
public:
    string makeFancyString(string s) {
        
        int n = s.length();
        string ans = "";
        ans+=s[0];
        int c = 1;
        
        
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                c++;
            }
            else{
                c=1;
            }
            if(c<3){
                ans += s[i];
            }
        }
        return ans;
    }
};
