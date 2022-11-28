// sk 
#include <bits/stdc++.h>
using namespace std;
int main() {
          int t;
          cin>>t;
          while(t--){
                    int n;
                    string s;
                    cin>>n>>s;
                    int sum(1);
                    for(int i=1;i<n;i++){
                            if(s[i]=='A') sum+=-1;
                            else sum+=1;
                            sum = max(sum,0);
                            
                           
                    }
                    
                    if(sum>0) cout<<"NO\n";
                    else cout<<"YES\n";
                    
          }
          return 0;
          
}
