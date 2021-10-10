class Solution {
public:
    int minOperations(vector<vector<int>>& v, int x) {
        
        int n = v.size();
        int m = v[0].size();
        
        
        vector<int> t;
        set<int> r;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                t.push_back(v[i][j]);
                r.insert(v[i][j]%x);
            }
        }
        
        if(r.size()>1){
            return -1;
        }
        
       
        sort(t.begin(),t.end());
        
        int mid = (n*m-1)/2;
        
        int c = 0;
   
        for(int i=0;i<n*m;i++){
            int temp = abs(t[i] - t[mid]);
            c += temp/x;
        }
        
        return c;
    }
};
