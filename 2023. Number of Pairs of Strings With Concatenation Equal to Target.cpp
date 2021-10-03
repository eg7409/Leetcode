class Solution {
public:
    int numOfPairs(vector<string>& v, string t) {
        int n = v.size();
        
        int count = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && v[i] + v[j] == t){
                    count++;
                }
            }
        }
        return count;
    }
};
