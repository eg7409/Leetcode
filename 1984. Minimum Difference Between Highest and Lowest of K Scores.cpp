class Solution {
public:
    int minimumDifference(vector<int>& v, int k) {
        int n = v.size();
        sort(v.begin(),v.end());
        
        int ans = v[k-1] - v[0];
        
        for(int i=k;i<n;i++){
            ans = min(ans,v[i]-v[i-k+1]);
        }
        return ans;
    }
};
