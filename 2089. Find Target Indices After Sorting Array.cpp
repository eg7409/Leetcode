class Solution {
public:
    vector<int> targetIndices(vector<int>& v, int k) {
        
        int n = v.size();
        
        sort(v.begin(),v.end());
        
        vector<int> res;
        
        for(int i=0;i<n;i++){
            if(v[i] == k){
                res.push_back(i);
            }
        }
        return res;
    }
};
