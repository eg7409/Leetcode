class Solution {
public:
    string reversePrefix(string s, char c) {
        
        int n = s.length();
        int j=-1;
        
        for(int i=0;i<n;i++){
            if(s[i] == c){
                j = i;
                break;
            }
        }
        
        if(j!=-1){
            for(int i=j; i>=0 && i>j/2;i--){
                swap(s[i],s[j-i]);
            }
        }
        return s;
    }
};
