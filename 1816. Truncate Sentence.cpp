class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> v;
        
        string temp="";
        int n = s.length();
        
        
        
        for(int i=0;i<n;i++){
            if(s[i] != ' '){
                temp += s[i];
            }
            else{
                if(v.size() == k){
                    break;
                }
                
                v.push_back(temp);
                temp="";
            }
        }
        
        if(v.size()<k){
            v.push_back(temp);
        }
        
        string ans = "";
        
        for(auto i : v){
            ans+=i;
            ans+=' ';
        }
        
        
        return ans.substr(0,ans.length()-1);
    }
};
