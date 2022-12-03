 // sk 
#include <bits/stdc++.h>
using namespace std;
int main() 
{
   int n ;
   cin>>n;
   string s;cin>>s;
   int one =0;
   int zero =0;
   
   for(int i =0;i<n;i++){
       if(s[i]=='0') zero++;
       else one++;
       
   }
   cout<<abs(one-zero)<<"\n";
   return 0;
}
