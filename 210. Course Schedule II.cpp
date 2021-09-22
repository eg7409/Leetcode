class Solution {
public:
    
    bool dfs(int i,vector<int> adj[],vector<bool> & visited,vector<bool> & dfsVisited,vector<int> &res){
        visited[i] = true;
        dfsVisited[i] = true;
        
        for(auto it : adj[i]){
            if(!visited[it]){
                if(dfs(it,adj,visited,dfsVisited,res)){
                    return true;
                }
            }
            else if(dfsVisited[it]){
                return true;
            }
        }
        
        dfsVisited[i] = false;
        res.push_back(i);
        return false;
        
    }
    
    vector<int> findOrder(int v, vector<vector<int>>& prerequisites) {
        int n = prerequisites.size();
      
        
        vector<int> adj[v];
        
        for(int i=0;i<n;i++){
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        
        vector<int> res;
        vector<bool> visited(v,false);
        vector<bool> dfsVisited(v,false);
        
        for(int i=0;i<v;i++){
            if(!visited[i]){
                if(dfs(i,adj,visited,dfsVisited,res)){
                    return {};
                }
            }
        }
        return res;
    }
};
