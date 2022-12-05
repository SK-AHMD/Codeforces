// sk 
#include <bits/stdc++.h>
using namespace std;
int main(){
          int t;
          cin>>t;
          while(t--){
                    int n;
                    cin>>n;
                    vector<string> v(n-2);
                    string ans="";
                    
                    for(int i=0;i<n-2;i++) cin>>v[i];
                    ans+=v[0][0];
                    int f(0);
                    
                    for(int i=1;i<n-2;i++){
                              
                              
                              if(v[i][0]!=v[i-1][1]){
                                        f=1;
                                        ans+=v[i-1][1];
                                        
                              }
                              ans+=v[i][0];
                    }
                    ans+=v[n-3][1];
                    if(f==0) ans+='b';
                    
                    cout<<ans<<"\n";
                    
                              
                    
          }
          return 0;
          
          
}
