class Solution {
public:
    
    void solve(vector<vector<int> > &v,int row,int col,int n,int m){
        
        vector<int> q;
        int r = row,c=col;
        
        while(r<n&&c<m){
            q.push_back(v[r][c]);
            r++;
            c++;
        }
        
        r = row;
        c = col;
        
        sort(q.begin(),q.end());
        
        
        int i=0;
        
        while(r<n&&c<m){
            v[r][c] = q[i++];
            r++;
            c++;
        }
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& v) {
        
        int n = v.size();
        int m = v[0].size();
        
        for(int col=0;col<m;col++){
            solve(v,0,col,n,m);
        }
        for(int row=1;row<n;row++){
            solve(v,row,0,n,m);
        }
        return v;
    }
};
