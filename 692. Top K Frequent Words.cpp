class comp{

public:
     bool operator()(pair<string,int> a,pair<string,int> b){
        if(a.second == b.second){
            return a.first > b.first;
        }
        return a.second < b.second;
     }
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& v, int k) {
        
        map<string,int> m;
        int n = v.size();
        
        for(int i=0;i<n;i++){
            m[v[i]]++;
        }
        
        priority_queue<pair<string,int> , vector<pair<string,int> > , comp> pq(m.begin(),m.end());
        
        vector<string> ans;
        
        while(k-->0){
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
    }
};
