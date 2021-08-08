#include<bits/stdc++.h>
class Solution {
public:
    int getLucky(string s, int k) {
        string ans = "";
        
        vector<int> alpha = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
        int n = s.length();
        
        for(int i=0;i<n;i++){
            ans += to_string(alpha[s[i]-'a']);
        }
        
      
        int temp = 0;
        
        
        for(int i=0;i<k;i++){
            temp = 0;
            for(int j=0;j<ans.length();j++){
                temp += (ans[j])-'0';
            }
            ans = to_string(temp);
        }
        return temp;
    }
};
