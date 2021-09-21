class Solution {
public:
    
    void solve(int l,int r,vector<int> v,set<vector<int> > &s){
        if(l==r){
            s.insert(v);
        }
        else{
            for(int i=l;i<=r;i++){
                swap(v[i],v[l]);
                solve(l+1,r,v,s);
                swap(v[i],v[l]);
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& v) {
        set<vector<int> >s;
        solve(0,v.size()-1,v,s);
        
        vector<vector<int> > res;
        
        for(auto i : s){
            res.push_back(i);
        }
        
        return res;
        
    }
};
