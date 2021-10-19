class Solution {
public:
    
    void dfs(int node,vector<vector<int> > v,vector<vector<int> > &ans,vector<int> &res,int n){
        res.push_back(node);
        
        if(node == n-1){
            ans.push_back(res);
        }
        
        for(auto i : v[node]){
            dfs(i,v,ans,res,n);
        }
        
        res.pop_back();
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& g) {
        
        int n = g.size();
        vector<vector<int> > ans;
        vector<int> res;
        
        
        dfs(0,g,ans,res,n);
        
        return ans;
    }
};
