class Solution {
public:
    bool checkAlmostEquivalent(string p, string s) {
        
        
        int n = s.length();
        int z = p.length();
        
        vector<int> m1(26);
        vector<int> m2(26);
        
        for(int i=0;i<n;i++){
            m1[s[i]-'a']++;
        }
        for(int i=0;i<z;i++){
            m2[p[i]-'a']++;
        }
        
        for(int i=0;i<26;i++){
            if(abs(m1[i]-m2[i])>3){
                return false;
            }
        }
        return true;
    }
};
