// sk 
#include <bits/stdc++.h>
using namespace std;
int main() {
          int t;
          cin>>t;
          while(t--)
          {
                       int n,k;
                       cin>>n>>k;
                       int arr[n+2];
            
                       for(int i=0;i<n;i++)
                                 cin>>arr[i];
                       
                       sort(arr,arr+n);
                       bool flag = false;
                       
                      for(int i=0,j=0;i<n;i++){
                                while(j<i && arr[i]-arr[j]>k) j++;
                                if(arr[i]-arr[j]==k) {flag = true; break;}
                        }
                      if(flag ==true) cout<<"YES\n";
                      else cout<<"NO\n";
                      
          }
          return 0;
          
}
