// sk 

#include <bits/stdc++.h>
using namespace std;

int main() {
          
         int t;
         cin>>t;
         while(t--){
                   
                   int n;
                   cin>>n;
                   int arr[n];
                   for(int i=0;i<n;i++){
                             cin>>arr[i];
                             
                   }
                   sort(arr,arr+n);
                   bool flag = true;
                   for(int i=0;i<n-1;i++){
                             
                             if((arr[i+1]-arr[i])>1) { flag = false;break;}
                           
                   }
                   if(flag==true) cout<<"YES\n";
                   else cout<<"NO\n";
                   
         }
         return 0;
         
}
