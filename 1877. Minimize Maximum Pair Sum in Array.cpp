class Solution {
public:
    int minPairSum(vector<int>& v) {
     
        int n = v.size();
        
        sort(v.begin(),v.end());
        
        vector<int> ans;
        
        int i=0,j=n-1;
        
        while(i<j){
            
            ans.push_back(v[i++] + v[j--]);
        
        }
        
        sort(ans.begin(),ans.end());
        
        return ans[(int)ans.size()-1];
    }
};
