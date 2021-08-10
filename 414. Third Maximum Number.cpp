class Solution {
public:
    int thirdMax(vector<int>& v) {
        set<int> s;
        
        int n = v.size();
        
        for(int i=0;i<n;i++){
            s.insert(v[i]);
            
            if(s.size() > 3){
                s.erase(s.begin());
            }
        }
        
        return s.size() == 3 ? *s.begin(): *s.rbegin();
        
    }
};
