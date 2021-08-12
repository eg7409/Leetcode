class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        vector<int> v(n+1,0);
        
        int a = trust.size();
        
        for(int i=0;i<a;i++){
            v[trust[i][0]]--;
            v[trust[i][1]]++;
        }
        
        for(int i=1;i<=n;i++){
            if(v[i] == n-1){
                return i;
            }
        }
        return -1;
    }
};
