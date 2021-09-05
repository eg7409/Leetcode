class Solution {
public:
    string frequencySort(string s) {
        
        string ans;
        
        int n = s.length();
        
        map<int,int> m;
        
        priority_queue<pair<int,int> > pq;
        
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        
        for(auto i : m){
            pq.push({i.second,i.first});
        }
        
        while(!pq.empty()){
            auto ele = pq.top();
            pq.pop();
            
            for(int i = 0;i<ele.first;i++){
                ans.push_back(ele.second);
            }
            
        }
        return ans;
    }
};
