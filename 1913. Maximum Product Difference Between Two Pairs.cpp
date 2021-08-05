class Solution {
public:
    int maxProductDifference(vector<int>& v) {
        sort(v.begin(),v.end());
        
        int n = v.size();
        
        int m1 = v[1]*v[0];
        int m2 = v[n-1]*v[n-2];
        
        return m2-m1;
    }
};
