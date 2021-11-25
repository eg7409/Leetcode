class Solution {
public:
    int maxProduct(vector<int>& v) {
        
        int n = v.size();
        
        int l=0,r=0,res=v[0];
        
        for(int i=0;i<n;i++){
            
            l = (l == 0 ? 1 : l) * v[i];
            r = (r == 0 ? 1 : r) * v[n - i -1];
            
            res = max(res,max(l,r));
        }
        
        return res;
        
    }
};
