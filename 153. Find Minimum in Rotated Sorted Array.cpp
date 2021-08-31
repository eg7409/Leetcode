class Solution {
public:
    int findMin(vector<int>& v) {
        int n = v.size();
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                return v[i+1];
            }
        }
        return v[0];
    }
};
