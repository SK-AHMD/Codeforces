// sk 
#include<bits/stdc++.h>
using namespace std;


int main(){
          
     int  q;
     cin>>q;
     while(q--)
     {
          string s,t;
          cin>>s>>t;
          int  gc= __gcd(s.size(),t.size());
          string a="", b="";
          
          for(int i=0;i<t.size()/gc;i++){
                    a+=s;
          }
          for(int i=0;i<s.size()/gc;i++){
                    b+=t;
                    
          }
         if(a==b) cout<<a<<"\n";
         else cout<<-1<<"\n";
         
     }
     return 0;
     
}
