class Solution {
public:
    vector<int> getAverages(vector<int>& v, int k) {
        
        int n = v.size();
        
        int win = 2*k + 1;
        
        vector<int> res(n,-1);
        
        if(n-win+1<=0){
            return res;
        }
        
        
        long long sum = 0;
        vector<int> temp;
        int count = 0;
        
        int j = 0;
        for(int i=0;i<n;i++){
            
            count++;
            sum += v[i];
            
            if(count > win){
                count--;
                sum -= v[j];
                j++;
            }
            
            if(count == win){
                temp.push_back(sum/count);
            }
        }
        
        
        j = 0;
        for(int i=k;i<k+temp.size();i++){
            res[i] = temp[j++];
        }
        
        return res;
    }
};
