 
// sk 
#include <bits/stdc++.h>
using namespace std;
int main() {
   string s ,t;
   cin>>s>>t;
   long long  n = s.size();
   long long  m = t.size();
   long long  cnt=0;
   long long  i =n-1;
   long long  j=m-1;
  
  while(i>=0 && j>=0){
      if(s[i]!=t[j]) break;
      cnt++;
      i--;
      j--;   
    }
   cout<<(n+m)-2*cnt<<"\n";
   return 0;

}
