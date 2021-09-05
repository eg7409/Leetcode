class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& v, int k) {
        
        priority_queue<vector<int>,vector<vector<int> >,greater<vector<int> > > pq;
        
        int n = v.size();
        int sum = 0;
        
        for(int i=0;i<n;i++){
            sum  = 0;
            for(int j=0;j<v[i].size();j++){
                sum += v[i][j];
            }
            pq.push({sum,i});
        }
        
        vector<int> output;
        
        while(k>0){
            k--;
            output.push_back(pq.top()[1]);
            pq.pop();
        }
        return output;
    }
};
