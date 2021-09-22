class Solution {
public:
    
    bool dfs(int i,vector<int> adj[],vector<bool> & visited,vector<bool> &dfsVisited){
        
        visited[i] = true;
        dfsVisited[i]  = true;
        
        for(auto it : adj[i]){
            
            if(!visited[it]){
                if(dfs(it,adj,visited,dfsVisited)){
                    return true;
                }
            }
            else if(dfsVisited[it]){
                return true;
            }
        }
        
        dfsVisited[i] = false;
        return false;
    }
    
    bool canFinish(int v, vector<vector<int>>& pre) {
        
        int n = pre.size();
        
        vector<int> adj[v];
        
        for(int i=0;i<n;i++){
            adj[pre[i][0]].push_back(pre[i][1]);
        }
        
        vector<bool> visited(v,false);
        vector<bool> dfsVisited(v,false);
        
        for(int i=0;i<v;i++){
            if(!visited[i]){
                if(dfs(i,adj,visited,dfsVisited)){
                    return false;
                }
            }
        }
        return true;
    }
};
