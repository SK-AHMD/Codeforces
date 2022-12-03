// sk 
#include <bits/stdc++.h>
using namespace std;
int main() {
          
          int n,m;
          cin>>n>>m;
          int f[m];
          for(int i=0;i<m;i++)  cin>>f[i];
          
          sort(f,f+m);
          int mini(f[m-1]);
          for(int i=0;i<=m-n;i++)
               mini =min(mini,abs(f[i]-f[i+n-1]));
              
          cout<<mini<<"\n";  
          return 0;
          
}
