class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
        vector<int> ans;
        int n = v.size();
        
        int m = v[0].size();
        
        int top = 0,bottom = n-1,left=0,right = m-1;
        
       
        
        while(top<=bottom && left<=right){
            
            if(top<=bottom && left<=right){
                
                for(int i=left;i<=right;i++){
                    ans.push_back(v[top][i]);
                }
                top++;
                
            }
            
            if(top<=bottom && left<=right){
                
                for(int i=top;i<=bottom;i++){
                    ans.push_back(v[i][right]);
                }
                right--;
                
            }
            
            if(top<=bottom && left<=right){
                for(int i=right;i>=left;i--){
                    ans.push_back(v[bottom][i]);
                }
                bottom--;
                
            }
            
            if(top<=bottom && left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(v[i][left]);
                }
                left++;
                
            }
            
        }
        return ans;
    }
    
};
