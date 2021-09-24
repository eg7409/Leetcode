class Solution {
public:
    int result=0;
    
    bool palin(string &s){
        
        int i=0,j=s.length()-1;
        
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void solve(string &s,string &s1,string &s2,int i){
        
        if(i==s.length()){
            
            if(palin(s1) && palin(s2))
            result = max(result,(int)s1.length()*(int)s2.length());
            return;
        }
        
        s1.push_back(s[i]);
        solve(s,s1,s2,i+1);
        s1.pop_back();
        
        s2.push_back(s[i]);
        solve(s,s1,s2,i+1);
        s2.pop_back();
        
        solve(s,s1,s2,i+1);
    }
    int maxProduct(string s) {
        string s1="", s2 = "";
        solve(s,s1,s2,0);
        return result;
    }
};
