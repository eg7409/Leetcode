class Solution {
public:
    string removeKdigits(string s, int k) {
        
        int n = s.length();
        
        stack<char> st;
        
        
        int i = 0;
        
        for(int i=0;i<n;i++){
            
            while(!st.empty() && st.top() > s[i] && k!=0){
                k--;
                st.pop();
            }
            
            st.push(s[i]);
        }
        string ans = "";
        
        while(!s.empty() && k!=0){
            k--;
            st.pop();
        }
        
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        int c = 0;
        
        for(int i=0;i<ans.size();i++){
            if(ans[i] == '0'){
                c++;
            }
            else{
                break;
            }
        }
        
        ans = ans.substr(c,ans.size());
        
        if(ans.size() == 0){
            ans = "0";
        }
        return ans;
    }
};
