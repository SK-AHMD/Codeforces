// sk 
#include <bits/stdc++.h>
using namespace std;
int main() {
          
          int  t;
          cin>>t;
          while(t--){
                    int n;
                    cin>>n;
                    
                    vector<int> v(n);
                    int mini = 10000000;
                    
                    for(int i=0;i<n;i++){
                             cin>>v[i];
                              
                              mini = min(v[i],mini);
                              
                    }
                    
                    vector<pair<int,int>> ans;
                    for(int i=0;i<n;i++){
                              
                              if(v[i]==mini) continue;
                              if(ans.size()==(n/2)) break;
                              ans.push_back({v[i],mini});
                              
                    }
                    
                    for(auto x : ans) cout<<x.first<<' '<<x.second<<"\n";
                     
          }
          
          return 0;
        
}
