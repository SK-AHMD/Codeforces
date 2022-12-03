// bismillahir rahmanir rahim 
// sk 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ss="";
        
      for(int i =0; i<n;i++){
          if(s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9') ss+=s[i];
          if(ss.size()==2) break;
          
      }
      if(ss.size()==2) cout<<ss<<"\n";
      else cout<<"-1\n";
      
        
    }
    return 0;
    
}
