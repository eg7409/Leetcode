class Solution {
public:
    vector<int> buildArray(vector<int>& v) {
        
        int n = v.size();
        
        for(int i=0;i<n;i++){
            v[i] = v[i]+(v[v[i]]%n)*n;
        }
        for(int i=0;i<n;i++){
            v[i] = v[i]/n;
        }
        return v;
    }
};

/*

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        
        for(int i=0;i<n;i++){
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};


*/
