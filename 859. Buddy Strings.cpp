class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n =s.length();
        int m = goal.length();
        
        if(n!=m){
            return false;
        }
        if(s==goal){
            vector<int> f(26);
            for(int j = 0;j<n;j++){
               f[s[j]-'a']++;
            }
            bool flag = false;
            for(int j=0;j<26;j++){
                if(f[j]>=2){
                    flag = true;
                    break;
                }
            }
            if(flag){
                return true;
            }
            return false;
        }
        
        int first=-1,second=-1;
        int i;
        
        for(i=0;i<n;i++){
            if(s[i] != goal[i]){
                first = i;
                break;
            }
        }
        
        for(int j = i+1;j<n;j++){
            if(s[j] != goal[j]){
                second = j;
                break;
            }
        }
        
        int c =0;
        
        for(int j = 0;j<n;j++){
            if(s[j] != goal[j]){
                c++;
            }
        }
        if(c!=2){
            return false;
        }
        
        if(first == -1 || second==-1){
            return false;
        }
        
        swap(s[first],s[second]);
        
        if(s!=goal){
            return false;
        }
        
        return true;
    }
    
};
