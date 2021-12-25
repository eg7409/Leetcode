#define ll long long
class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& a) {
        ll ans = 0;
        map<double,int> m;
        
        int n = a.size();
        vector<double> v;
        
        double t;
        
        for(int i=0;i<n;i++){
            t = (double)a[i][0]/a[i][1];
            v.push_back(t);
        }
        
    
        for(int i=0;i<n;i++){
            if(m.find(v[i])!=m.end()){
                ans += m[v[i]];
            }

            m[v[i]]++;
        }
        
        return ans;
    }
};
