// sk 
#include <bits/stdc++.h>
using namespace std;
int main(){
          int t;
          cin>>t;
          long long a = 2050;
          while(t--){
                    long long  n;
                    cin>>n;
                    long long res(0);
                    long long r = n/a;
                    if(n%a) cout<<-1<<"\n";
                    
                   else { 
                      while(r>0){ res+=(r%10); r/=10;}
                      cout<<res<<"\n";   
                    }
             }
     return 0;       
  }
