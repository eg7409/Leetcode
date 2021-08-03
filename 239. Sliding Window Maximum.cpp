class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& v, int k) {
        
        vector<int> ans;
        
        deque<int> q;
        int n = v.size();
        
        for(int i=0;i<k;i++){
            
            while(!q.empty() && v[q.back()] <= v[i]){
                q.pop_back();
            }
            q.push_back(i);
        }
        ans.push_back(v[q.front()]);
        
        
        for(int i=k;i<n;i++){
            
            if(i-k == q.front()){
                q.pop_front();
            }
            while(!q.empty() && v[q.back()] <= v[i]){
                q.pop_back();
            }
            
            q.push_back(i);
            ans.push_back(v[q.front()]);
        }
        return ans;
    }
};
