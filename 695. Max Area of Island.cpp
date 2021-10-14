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
