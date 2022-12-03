
 // sk
#include<bits/stdc++.h>
using namespace std;
int main() {
      int n,m;
      cin>>n>>m;
      int tvp[n];

      for(int i=0;i<n;i++)
          cin>>tvp[i];
       
      sort(tvp,tvp+n);
      int sum=0;
      for(int i=0;tvp[i]<=0 && i<m;i++)
            sum+=abs(tvp[i]);

      cout<<sum<<"\n";
      return 0;
}
 
