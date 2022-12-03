// sk 
#include <bits/stdc++.h>
using namespace std;
int main( ){
          int t;
          cin>>t;
          while(t--){
                    int n;
                    cin>>n;
                    int p[n];
                    for(int i=0;i<n;i++) cin>>p[i];
                    
                    int a(0),b(0),c(0);
                    for(int i=1;i<n-1;i++){
                              if(p[i]>p[i-1] && p[i]>p[i+1]) { a=i;b=i+1;c=i+2;break;}
                              
                    }
                    if(a==0) cout<<"NO\n";
                    else cout<<"YES\n"<<a<<" "<<b<<" "<<c<<"\n";
                    
          }
          return 0;
          
}
