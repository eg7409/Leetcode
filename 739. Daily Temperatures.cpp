class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& v) {
        
        
        stack<int> st;
        int n = v.size();
        vector<int> ans(n,0);
        
        int j = n-1;
        ans[j--] = 0;
        st.push(n-1);
        
        
        
        for(int i=n-2;i>=0;i--){
            
            while(!st.empty() && v[st.top()] <= v[i]){
                st.pop();
            }
            
            if(st.empty()){
                ans[j--] = 0;
            }
            else{
                ans[j--] = (st.top())  - i;
            }
            
            st.push(i);
        }
        return ans;
    }
};
