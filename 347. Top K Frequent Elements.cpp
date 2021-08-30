class Solution {
public:
    
   
    vector<int> topKFrequent(vector<int>& v, int k) {
        map<int,int> m;
        int n = v.size();
        
        for(int i=0;i<n;i++){
            m[v[i]]++;
        }
        
        vector<pair<int,int> > a;
        
        for(auto i : m){
            a.push_back({i.second,i.first});
        }
        
        sort(a.begin(),a.end());
        
        vector<int> ans;
        
        
         int p = a.size();
        for(int i=p-1;i>=0;i--){
            if(k>0){
                ans.push_back(a[i].second);
            }
            k--;
            if(k<=0){
                break;
            }
            
        }
        return ans;
    }
};
