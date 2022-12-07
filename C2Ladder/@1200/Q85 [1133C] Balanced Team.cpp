// sk 
#include <bits/stdc++.h>
using namespace std;
int main() {
          int n;
          cin>>n;
          int arr[n];
          for(int i=0;i<n;i++){
                    cin>>arr[i];
                    
          }
          sort(arr,arr+n);
          
          int ans(0);
          int j=0;
          
          for(int i=0;i<n;i++){
                    
                    while( j<n && (arr[j]-arr[i] <= 5)){
                         j++;
                         ans = max(ans,j-i);
                    }
          }
          cout<<ans<<"\n";
          return 0;
          
}
