class Solution {
public:
    int search(vector<int>& v, int k) {
        
        int n = v.size();
        int i=0,j=n-1;
        
        while(i<=j){
            
            int mid = (j + i)/2;
            
            if(v[mid] == k){
                return mid;
            }
            
            if(v[i] <= v[mid]){
                
                if(v[i] <= k && k <= v[mid]){
                    j = mid - 1;
                }
                else{
                    i = mid + 1;
                }
            }
            else{
                
                if(v[mid] <= k && k <= v[j]){
                    i = mid + 1;
                }
                else{
                    j = mid - 1;
                }
            }
        }
        return -1;
    }
};
