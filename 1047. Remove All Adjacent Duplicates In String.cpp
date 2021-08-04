class Solution {
public:
    string removeDuplicates(string s) {
        
        int n = s.length();
        
        stack<int> st;
        
        for(int i=0;i<n;i++){
            if(!st.empty() && st.top() == s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        
        s = "";
        
        while(!st.empty()){
            s += st.top();
            st.pop();
        }
        
        int m = s.length();
        
        string ans = "";
        
        for(int i=m-1;i>=0;i--){
            ans += s[i];
        }
        return ans;
    }
};


///////////////////////////////////


class Solution {
public:
    string removeDuplicates(string s) {
        int i=0,n = s.length();
        
        for(int j=0;j<n;j++,i++){
            s[i] = s[j];
            
            if(i>0 && s[i-1] == s[i]){
                i-=2;
            }
            
        }
        return s.substr(0,i);
    }
};
