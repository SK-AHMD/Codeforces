// sk
#include <bits/stdc++.h>
using namespace std;
int main(){
          
          long long  n;
          cin>>n;
          long long  arr[n+1],sum[n+1]={0};
        
          for(long long  i=1;i<=n;i++){
                    cin>>arr[n+1];
                    sum[i]= sum[i-1]+arr[n+1];
          }
          if(sum[n]%3!=0){
                    cout<<"0\n";
                    return 0;  
          }
          long long a = sum[n]/3;
          long long  cnt(0),ans(0);
          for(long long  i=1;i<n;i++){
                   if(sum[i]==2*a) ans+=cnt;
                   if(sum[i]==a) cnt++;
          }
          
           cout<<ans<<"\n";
      
          return 0;
          
}
