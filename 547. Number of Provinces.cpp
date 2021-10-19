class Solution {
public:
    
    void dfs(int node,vector<int> v[],vector<bool> &visited){
        visited[node] = true;
        
        for(auto i : v[node]){
            if(!visited[i]){
                dfs(i,v,visited);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& g) {
        
        int n = g.size();
        
        vector<int> v[n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && g[i][j] == 1)
                v[i].push_back(j);
            }
        }
        
        
        vector<bool> visited(n,false);
        
        int c = 0;
        
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,v,visited);
                c++;
            }
        }
        return c;
    }
};
