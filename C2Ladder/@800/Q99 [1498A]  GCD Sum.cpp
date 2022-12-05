// sk 

#include <bits/stdc++.h>
using namespace std;
long long  sum(long long   n){
          long long    ans(0);
          while(n>0){
                    ans+=n%10;
                    n/=10;  
          }         
          return ans;           
}

int main() {
          
        int t;
        cin>>t;
        
        while(t--){
                  
                long long n;
                  cin>>n;
        
                  for( long long i=n;;i++){
                            if(__gcd(i,sum(i))>1){
                                      cout<<i<<"\n";
                                      break;
                                      
                            }
                  }
                  
                  
        }
     return 0;
         
}
