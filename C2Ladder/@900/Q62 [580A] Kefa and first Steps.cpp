// sk 
#include <bits/stdc++.h>
using namespace std;
int main(){
       int n;
       cin>>n;
       int arr[n+1];
       int l=1;
       int prev=0;
       for(int i=1;i<=n;i++) {
                 cin>>arr[i];
                 
       }
       for(int i=2;i<=n;i++){
                 
                 if(arr[i-1]<=arr[i]) l = max(i-prev,l);
                 else prev=i-1;
                 
       }
       
       cout<<l<<"\n";
       
         return 0;
         
}
