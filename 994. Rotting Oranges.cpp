class Solution {
public:
    int orangesRotting(vector<vector<int>>& v) {
        
        int n = v.size();
        int m = v[0].size();
        
        int orange = 0;
        
        queue<pair<int,int> > q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j] == 1){
                    orange++;
                }
                else if(v[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        
        
        int time = 0;
        vector<vector<int> > direction = {{0,1},{0,-1},{1,0},{-1,0}};
        
        while(!q.empty() && orange>0){
            int s = q.size();
            
            for(int i=0;i<s;i++){
                pair<int,int> p = q.front();
                q.pop();
                
                for(auto d : direction){
                    int newX = p.first + d[0];
                    int newY = p.second + d[1];
                    
                    if(newX>=0 && newX<n && newY>=0 && newY<m && v[newX][newY] == 1){
                        v[newX][newY] = 2;
                        
                        q.push({newX,newY});
                        orange--;
                    }
                }
            }
            time++;
        }
        
        return orange==0?time:-1;
    }
};
