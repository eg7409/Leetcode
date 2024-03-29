class Solution {
public:
    int trap(vector<int>& v) {
        
       stack<int> st;
        
        int n = v.size();
        int ans = 0;
        
        for(int i=0;i<n;i++){
            
            while(!st.empty() && v[st.top()] < v[i]){
                int top = st.top();
                st.pop();
                
                if(st.empty()){
                    break;
                }
                
                int distance = i - st.top() - 1;
                ans += distance*(min(v[i],v[st.top()]) - v[top]);
            }
            st.push(i);
        }
        return ans;
    }
};



/////////////////////////////////////////////////////////////////////////


class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        
        if(n==0){
            return 0;
        }
        
        vector<int> left(n,0);
        vector<int> right(n,0);
        
        left[0] = height[0];
        
        for(int i=1;i<n;i++){
            left[i] = max(left[i-1],height[i]);
        }
        right[n-1] = height[n-1];
        
        for(int i=n-2;i>=0;i--){
            right[i] = max(right[i+1],height[i]);
        }
        
        int sum = 0;
        
        for(int i=0;i<n;i++){
            sum += min(left[i],right[i]) - height[i];
        }
        return sum;
    }
};
