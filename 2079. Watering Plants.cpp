class Solution {
public:
    int wateringPlants(vector<int>& v, int k) {
        
        int n = v.size();
        
        int sum=0,res=0;
        
        for(int i=0;i<n;i++){
            
            if(sum + v[i] <= k){
                res++;
                sum += v[i];
            }
            else{
                res += (i+1) + i;
                sum = v[i];
            }
            
        }
        
        return res;
    }
};
