// sk 
#include <bits/stdc++.h>
using namespace std;
int main(){
          int t;
          cin>>t;
          while(t--){
                    int a , b;
                    cin>>a>>b;
                    if(a==0 && b>0) cout<<1<<"\n";
                    
                    else if(a>0 && b==0 ) cout<<a+1<<"\n";
                    else if( a==0 && b==0 ) cout<<1<<"\n";
                    
                    else cout<<1*a+2*b + 1 <<"\n";  
          }
          return 0; 
}
