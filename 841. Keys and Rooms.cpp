class Solution {
public:
    
    void dfs(int node,vector<vector<int> > v,vector<bool> &visited){
        visited[node] = true;
        
        for(auto i : v[node]){
            if(!visited[i]){
                dfs(i,v,visited);
            }
        }
    }
  
    bool canVisitAllRooms(vector<vector<int>>& v) {
        
        int n = v.size();
        vector<bool> visited(n,false);
        
        dfs(0,v,visited);
        
        bool f = true;
        for(int i=0;i<n;i++){
            f = f && visited[i];
        }
        return f;
    }
};
