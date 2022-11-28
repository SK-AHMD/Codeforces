// sk 
#include <bits/stdc++.h>
using namespace std;
int main(){
          int t;
          cin>>t;
          while(t--){
               int n;
               cin>>n;
               int odd(0),ans(0),num(0);
                    
               int mini = 2*100000;
                    
               for(int i=0;i<n;i++){
                         int x;
                         cin>>x;
                         if(x&1){
                                        
                                odd++;
                                     
                              }
                    else {
                              if((x/2)&1){
                                        ans++;
                                        odd++;
                                        
                              }else {
                              int k=0;
                              while((x&1)==0){
                                        x>>=1;
                                        k++;
                                                            
                              }
                              mini=min(mini,k);
                              num++;
                                            
                                }
                         }
                    }
                    
                 if(odd) cout<<ans+num<<"\n";
                 else cout<<mini+num-1<<"\n";
                 
                    
          }
          return 0;
          
}
