class Solution {
public:
    void reverseString(vector<char>& v) {
        int n = v.size();
        
        int i=0,j = n-1;
        
        while(i<j){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
};
