class Solution {
public:
    
    void solve(vector<int> v,vector<vector<int> > &res,int l,int r){
        if(l==r){
            res.push_back(v);
        }
        else{
            for(int i=l;i<=r;i++){
                swap(v[i],v[l]);
                solve(v,res,l+1,r);
                swap(v[i],v[l]);
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& v) {
        
        vector<vector<int> > res;
        
        solve(v,res,0,v.size()-1);
        
        return res;
    }
};
