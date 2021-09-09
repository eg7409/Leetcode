class Solution {
public:
    int countQuadruplets(vector<int>& v) {
        int n = v.size();
        
        int c = 0;
        
        for(int i=0;i<n-3;i++){
            for(int j = i+1;j<n-2;j++){
                for(int k = j+1;k<n-1;k++){
                    for(int l=k+1;l<n;l++){
                        if(v[i]+v[j]+v[k] == v[l]){
                            c++;
                        }
                    }
                }
            }
        }
        return c;
    }
};
