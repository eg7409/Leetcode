class Solution {
public:
    int countPrimes(int n) {
          vector<bool> v(n+1,true);

    for(int i=2;i*i<n;i++){

        if(v[i]){
            for(int j=i*i;j<n;j+=i){
                v[j] = false;
            }
        }
    }
    
    int c = 0;
    for(int i=2;i<n;i++){
        if(v[i]){
            c++;
        }
    }
        return c;
    }
};


////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

//Sieve of Eratosthenes  -   Time complexity : O(n*log(log(n))) 

void solve(int n){

    vector<bool> v(n+1,true);

    for(int i=2;i*i<=n;i++){

        if(v[i]){
            for(int j=i*i;j<=n;j+=i){
                v[j] = false;
            }
        }
    }
    
    for(int i=2;i<=n;i++){
        if(v[i]){
            cout<<i<<" ";
        }
    }
}



int main(){

    solve(2);
    return 0;
}
