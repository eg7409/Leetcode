class Solution {
public:
    bool checkInclusion(string p, string s) {
        
        int n = s.length();
        int m = p.length();
        
        string t1=s,t2=p;
        sort(t2.begin(),t2.end());
        
        for(int i=0;i<=n-m;i++){
            
            t1 = t1.substr(i,m);
            sort(t1.begin(),t1.end());
            
            if( t1 == t2){
                return true;
            }
            
            t1 = s;
        }
        
        return false;
    }
};
