// sk 
#include <bits/stdc++.h>
using namespace std;
int main() {
          
          int t;
          cin>>t;
          while(t--){
                    int n;
                    cin>>n;
                    int arr[n+1];
                  
                    for(int i=0;i<n;i++) cin>>arr[i];
                    int i(0);
                    while(i<n-1 && arr[i]<=arr[i+1]) i++;
                    while(i<n-1 && arr[i]>=arr[i+1]) i++;
                    
                    if(i+1==n) cout<<"yes\n";
                    else cout<<"no\n";
                    
          }
          return 0;  
}
