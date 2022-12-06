// sk 
#include <bits/stdc++.h>
using namespace std;
int main() {
          freopen("input.txt","r",stdin);
          freopen("output.txt","w",stdout);
          int   n,k;
          cin>>n>>k;
          
          pair<int,int> arr[n+1];
          for(int i=0;i<n;i++){
                    cin>>arr[i].first;
                    arr[i].second = i;
          }
          sort(arr,arr+n);
          cout<<arr[n-k].first<<"\n";
          for(int i=n-k;i<n;i++){
                    cout<<arr[i].second+1<<" ";
                    
          }
          
      return 0;
          
          
}
