// sk 
#include <bits/stdc++.h>
using namespace std;

int main() {
          
          int n,l;
          cin>>n>>l;
          int arr[n];
          
          for(int i=0;i<n;i++) cin>>arr[i];
          sort(arr,arr+n);
          
          int ans=max(arr[0],l-arr[n-1])*2;
          
          for(int i=0;i<n-1;i++) {
                    ans = max(ans,arr[i+1]-arr[i]);
                    
          }
          cout.precision(10);
          cout<<fixed<<ans/2.0<<endl;
          return 0;
          
       
}
