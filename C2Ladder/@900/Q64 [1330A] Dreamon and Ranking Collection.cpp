// sk 
#include <bits/stdc++.h>
using namespace std;
int main(){
         
         int t;
         cin>>t;
         while(t--){
                  int n,x;
                  cin>>n>>x;
                  vector<bool> v(1000,false);
                  for(int i=0;i<n;i++){ int a ;  cin>>a; v[a]=true;}
                  
                  int ans(0);
                  
                  for(int i=1;i<1000;i++){
                              if(v[i]) continue;
                              if(x>0 ) --x;
                              else { ans = i-1; break;}
                              
                  }
                  cout<<ans<<"\n";
           
         }
  
         return 0;
         
}
