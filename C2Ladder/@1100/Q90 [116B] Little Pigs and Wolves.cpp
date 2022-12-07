// sk 
#include <bits/stdc++.h>
using namespace std;
int main(){
          
          int n,m;
          cin>>n>>m;
          char arr[n+1][m+1];
          int  cnt(0);
          for(int i=0;i<n;i++)
                 for(int j=0;j<m;j++)
                        cin>>arr[i][j];
                              
          for(int i=0;i<n;i++)
              for(int  j=0;j<m;j++)
                   if(arr[i][j]=='W')
                       if(arr[i][j-1]=='P' || arr[i][j+1]=='P' || arr[i-1][j]=='P' || arr[i+1][j]=='P')
                                         cnt++;
                    
            cout<<cnt<<"\n";
            return 0;
            
}
