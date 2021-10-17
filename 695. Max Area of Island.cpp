class Solution {
public:
    
    int solve(vector<vector<pair<int,bool> > > &v,int row,int col,int n,int m){
        
        queue<pair<int,int> > q;
        q.push({row,col});
        v[row][col].second = true;
        
        int count = 0;
        
        vector<vector<int> > direction = {{0,1},{0,-1},{1,0},{-1,0}};
        
        while(!q.empty()){
            pair<int,int> p = q.front();
            q.pop();
            
            for(auto i : direction){
                int x = p.first + i[0];
                int y = p.second + i[1];
                
                if(x>=0 && x<n && y>= 0 && y<m && v[x][y].first == 1 && !v[x][y].second){
                    v[x][y].second = true;
                    q.push({x,y});
                    count++;
                }
            }
        }
        return count+1;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<pair<int,bool> > > v(n,vector<pair<int,bool> >(m));
        
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 v[i][j].first = grid[i][j];
                v[i][j].second = false;
            }
        }
        
        int ans = 0;
        int count = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!v[i][j].second && v[i][j].first == 1){
                    count = solve(v,i,j,n,m);
                    ans = max(ans,count);
                }
            }
        }
        return ans;
    }
};


///////////////////////////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    
    int solve(vector<vector<int> > v,vector<vector<bool> > &visited,int i,int j,int n,int m){
        
        if(i < 0 || i >= n || j < 0 || j >= m || visited[i][j] || v[i][j] == 0){
            return 0;
        }
        
        visited[i][j] = true;
        
        return (1 + solve(v,visited,i+1,j,n,m) + solve(v,visited,i-1,j,n,m) + solve(v,visited,i,j+1,n,m) +solve(v,visited,i,j-1,n,m));
    }
    int maxAreaOfIsland(vector<vector<int>>& v) {
        
        int n = v.size();
        int m = v[0].size();
        
        int ans = 0;
        
        vector<vector<bool> > visited(n,vector<bool>(m,false));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] && v[i][j] == 1){
                    ans = max(ans,solve(v,visited,i,j,n,m));
                }
            }
        }
        return ans;
    }
};
