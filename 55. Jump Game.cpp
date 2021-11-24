class Solution {
public:
    bool canJump(vector<int>& v) {
        
        int n = v.size();
        
        int res = 0;
        
        for(int i=0; i<n && i<=res; i++){
            res = max(res,i+v[i]);
        }
        
        return (res >= n-1);
    }
};
