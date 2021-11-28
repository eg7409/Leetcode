class Solution {
public:
    int minimumBuckets(string s) {
        
        int n = s.size();
        
        if(n==1){
            if(s[0] == 'H'){
                return -1;
            }
            else{
                return 0;
            }
        }
        
        vector<bool> v(n,false);
        int count = 0;
        
       for(int i=1;i<n-1;i++){
           if(s[i] == '.' && s[i-1] =='H' && s[i+1] =='H'){
               if(!v[i-1] && !v[i+1]){
                   count++;
                   v[i] = true;
                   v[i-1] = true;
                   v[i+1] = true;
               }
           }
       }
        
        for(int i=1;i<n-1;i++){
            if(s[i] == 'H' && !v[i]){
               if(s[i+1] == '.' && v[i+1]){
                   v[i] = true;
               }
               else if(s[i-1] == '.' && v[i-1]){
                   v[i] = true;
               } 
            }
        }
        
        if(s[0] == 'H' && !v[0] && s[1] == '.' && v[1]){
            v[0] = true;
        }
        else{
            if(s[0] == 'H' && !v[0] && s[1] == '.' && !v[1]){
               v[0] = true;
                v[1] = true;
                count++;
            }  
        }
        
        if(s[n-1] == 'H' && !v[n-1] && s[n-2] == '.' && v[n-2]){
            v[n-1] = true;
        }
        
        else{
            if(s[n-1] == 'H' && !v[n-1] && s[n-2] == '.' && !v[n-2]){
            v[n-1] = true;
                count++;
                v[n-2] = true;
        }
        }
        
        for(int i=1;i<n-1;i++){
            if(s[i] == 'H' && !v[i]){
                if(s[i-1] == '.' && !v[i-1]){
                    count++;
                    v[i] = true;
                    v[i-1] = true;
                }
                else if(s[i+1] == '.' && !v[i+1]){
                    count++;
                    v[i] = true;
                    v[i+1] = true;
                }
            }
        }
        
        
        for(int i=0;i<n;i++){
            if(s[i] == 'H' && !v[i]){
                return -1;
            }
        }
        
        return count;
    }
};
