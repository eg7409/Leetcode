class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        
        int n = s.size();
        int m = t.size();
        
        for(int i=0;i<n;i++){
            if(!st1.empty() && s[i] == '#'){
                st1.pop();
            }
            else if(s[i]!='#'){
                st1.push(s[i]);
            }
        }
        
        for(int i=0;i<m;i++){
            if(!st2.empty() && t[i] == '#'){
                st2.pop();
            }
            else if(t[i]!='#'){
                st2.push(t[i]);
            }
        }
        
        if(st1.size() != st2.size()){
            return false;
        }
        
        while(!st1.empty()){
            int x = st1.top();
            int y = st2.top();
            
            
            
            st1.pop();
            st2.pop();
            
            if(x != y){
                return false;
            }
        }
        return true;
    }
};

/*Another Method*/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.size();
        int m = t.size();
        
        int skip = 0;
        
        string s1 = "", s2 = "";
        
        for(int i=n-1;i>=0;i--){
            if(s[i] == '#'){
                skip++;
            }
            else{
                if(skip>0){
                    skip--;
                }
                else{
                    s1 += s[i];
                }
            }
        }
        
        skip = 0;
        
        for(int i=m-1;i>=0;i--){
            if(t[i] == '#'){
                skip++;
            }
            else{
                if(skip!=0){
                    skip--;
                }
                else{
                    s2 += t[i];
                }
            }
        }
        
        
        return s1 == s2;
    }
};
