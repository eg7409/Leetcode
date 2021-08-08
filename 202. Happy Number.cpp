class Solution {
public:
    
    int helper(int n){
        int sum = 0;
        
        while(n>0){
            int temp = n%10;
            sum += (temp *temp);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        set<int> s;
        
        if(n==0){
            return false;
        }
        if(n==1){
            return true;
        }
        
        while(n!=1){
            
            if(s.find(n) == s.end()){
                s.insert(n);
            }
            else{
                return false;
            }
             n = helper(n);
        }
        return true;
    }
};
