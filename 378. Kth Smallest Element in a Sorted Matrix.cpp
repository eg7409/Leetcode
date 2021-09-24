class Solution {
public:
    int kthSmallest(vector<vector<int>>& v, int k) {
        
        priority_queue<int> pq;
        
        int n = v.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                pq.push(v[i][j]);
                
                if(pq.size()>k){
                    pq.pop();
                }
            }
        }
        
        return pq.top();
            
    }
};
