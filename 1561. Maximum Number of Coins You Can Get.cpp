class Solution {
public:
    int maxCoins(vector<int>& v) {
        
        int n = v.size();
        
        sort(v.begin(),v.end());
        
        int i=0,j=n-2;
        int ans = 0;
        
        while(i < j){
            ans += v[j];
            i++;
            j-=2;
        }
        
        return ans;
    }
};


//////////////////////////////////////////////

class Solution {
public:
    int maxCoins(vector<int>& v) {
        
        int n = v.size();
        sort(v.begin(),v.end());
        
        int ans = 0;
        
        for(int i=n/3;i<n;i+=2){
            ans += v[i];
        }
        return ans;
    }
};
