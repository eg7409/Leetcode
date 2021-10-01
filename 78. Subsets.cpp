class Solution {
public:
    
    void f(vector<int> v,int i,vector<vector<int> > &res,vector<int> &temp){
      
        if(i == v.size()){
            res.push_back(temp);
            return;
        }
        vector<int> a(temp);
        a.push_back(v[i]);
        f(v,i+1,res,temp);
        f(v,i+1,res,a);
    }
    
    vector<vector<int>> subsets(vector<int>& v) {
        
        vector<int> temp = {};
        vector<vector<int> > res;

        f(v,0,res,temp);
        
        return res;
        
    }
};
