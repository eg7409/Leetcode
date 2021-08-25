class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.length();
        
        for(int i=0;i<n;i++){
            
            if(s[i] == '(' || s[i] =='{' || s[i] =='['){
                st.push(s[i]);
            }
            
            if(s[i] == '}'){
                if(st.empty()){
                    return false;
                }
                if(st.top()!='{'){
                    return false;
                }
                st.pop();
            }
            if(s[i] == ')'){
                if(st.empty()){
                    return false;
                }
                if(st.top()!='('){
                    return false;
                }
                st.pop();
            }
            if(s[i] == ']'){
                if(st.empty()){
                    return false;
                }
                if(st.top()!='['){
                    return false;
                }
                st.pop();
            }
            
        }
        if(st.empty())
        return true;
        
        return false;
    }
};
