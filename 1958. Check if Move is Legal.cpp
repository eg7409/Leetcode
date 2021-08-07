class Solution {
public:
    bool checkMove(vector<vector<char>>& v, int rM, int cM, char color) {
        
        
        int n = 8;
        char check = 'B';
        
        if(color == 'W'){
            
            check = 'B';
        }
        else{
            check = 'W';
        }
        
        v[rM][cM] = color;
        
        //bottom
        
        bool f = false;
        bool ans = false;
        
        int c = 0;
        
        for(int i=rM+1;i<n;i++){
            
            if(v[i][cM] == color && !f){
                break;
            }
            
            if(v[i][cM] == check && !f){
                f = true;
            }
            
            if(v[i][cM] == '.'){
                break;
            }
            
            if(v[i][cM] == check){
                c++;
            }
            
            if(f && v[i][cM] == color && c>=1){
                ans = true;
            }
        }
        
        f = false;
        c=0;
        
        //Upper
        for(int i=rM-1;i>=0;i--){
            if(v[i][cM] == color && !f){
                break;
            }
            if(v[i][cM] == check && !f){
                f = true;
            }
            if(v[i][cM] == '.'){
                break;
            }
            if(v[i][cM] == check){
                c++;
            }
            if(f && v[i][cM] == color&&c>=1){
                ans = true;
            }
        }
        f = false;
        
        //left
        c=0;
        
        for(int i=cM-1;i>=0;i--){
            if(v[rM][i] == color && !f){
                break;
            }
            if(v[rM][i] == check && !f){
                f = true;
            }
            if(v[rM][i] == '.'){
                break;
            }
            if(v[rM][i] == check){
                c++;
            }
            if(f && v[rM][i] == color&&c>=1){
                ans = true;
            }
        }
        
        f = false;
        c=0;
        
        //right
        
        for(int i=cM+1;i<n;i++){
            if(v[rM][i] == color && !f){
                break;
            }
            if(v[rM][i] == check && !f){
                f = true;
            }
            if(v[rM][i] == '.'){
                break;
            }
            if(v[rM][i] == check){
                c++;
            }
            if(f && v[rM][i] == color&&c>=1){
                ans = true;
            }
        }
        
        f = false;
        c=0;
        
        //left upper diagnol
        
        for(int i=rM-1,j=cM-1;i>=0&&j>=0;i--,j--){
            if(v[i][j] == color && !f){
                break;
            }
            if(v[i][j] == check && !f){
                f = true;
            }
            if(v[i][j] == '.'){
                break;
            }
            if(v[i][j] == check){
                c++;
            }
            if(f && v[i][j] == color&&c>=1){
                ans = true;
            }
        }
        
        f = false;
        c=0;
        
        //right upper diagnol
        
        for(int i=rM-1,j=cM+1;i>=0&&j<n;i--,j++){
            if(v[i][j] == color && !f){
                break;
            }
            if(v[i][j] == check && !f){
                f = true;
            }
            if(v[i][j] == '.'){
                break;
            }
            if(v[i][j] == check){
                c++;
            }
            if(f && v[i][j] == color&&c>=1){
                ans = true;
            }
        }
        
        f = false;
        c=0;
        
        //left lower diagnol
        
        for(int i=rM+1,j=cM-1;i<n&&j>=0;i++,j--){
            if(v[i][j] == color && !f){
                break;
            }
            if(v[i][j] == check && !f){
                f = true;
            }
            if(v[i][j] == '.'){
                break;
            }
            if(v[i][j] == check){
                c++;
            }
            if(f && v[i][j] == color&&c>=1){
                ans = true;
            }
        }
        
        f = false;
        c=0;
        
        //right lower diagnol
        
        for(int i=rM+1,j=cM+1;i<n&&j<n;i++,j++){
            if(v[i][j] == color && !f){
                break;
            }
            if(v[i][j] == check && !f){
                f = true;
            }
            
            if(v[i][j] == '.'){
                break;
            }
            if(v[i][j] == check){
                c++;
            }
            
            if(f && v[i][j] == color&&c>=1){
                ans = true;
            }
        }
        
        
        return ans;
        
    }
};
