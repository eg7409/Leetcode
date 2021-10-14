class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
        
        int n = v.size();
        
        priority_queue<int> pq(v.begin(),v.end());
        
        while(pq.size()>1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            
            if(x!=y){
                pq.push(abs(x-y));
            }
        }
        
        return pq.size() == 0 ? 0 : pq.top();
    }
};
