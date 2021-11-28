class Solution {
public:
    int countWords(vector<string>& v1, vector<string>& v2) {
        
        int n = v1.size();
        int m = v2.size();
     
        
        int count = 0;
        
                map<string ,int> m1;
        map<string,int> m2;
        
        for(int i=0;i<n;i++){
            m1[v1[i]]++;
        }
        
        for(int i=0;i<m;i++){
            m2[v2[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(m1[v1[i]] == 1){
                for(int j=0;j<m;j++){
                    if(v1[i] == v2[j]){
                        if(m2[v2[j]] == 1){
                            count++;
                            continue;
                        }
                    }
                }
            }
        }
        
        return count;
        
    }
};
