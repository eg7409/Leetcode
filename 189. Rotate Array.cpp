class Solution {
public:
    
    void reverse(vector<int> &v,int i,int j){
        while(i<=j){
            swap(v[i++],v[j--]);
        }
    }
    
    void rotate(vector<int>& v, int k) {
        
        
        int n = v.size();
        
        // what if k is greater than n? 
        k = k%n;

        reverse(v,0,n-1);
        reverse(v,0,k-1);
        reverse(v,k,n-1);
                
    }
};
