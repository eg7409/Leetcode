class Solution {
public:
    
 
    int islandPerimeter(vector<vector<int>>& v) {
        
        int n = v.size();
        int m = v[0].size();
        
        int ans = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j] == 1){
                    if(i == 0 || v[i-1][j] == 0){
                        ans++;
                    }
                    if(i == n-1 || v[i+1][j] == 0){
                        ans++;
                    }
                    if(j == 0 || v[i][j-1] == 0){
                        ans++;
                    }
                    if(j == m-1 || v[i][j+1] == 0){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};
