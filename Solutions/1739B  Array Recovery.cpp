// sk 
#include <bits/stdc++.h>
using namespace std;

int main(){
       int t;
       cin>>t;
       while(t--){
               int n;
               cin>>n;
               int a[n],d[n];
               for(int i=0;i<n;i++) cin>>d[i];
               a[0] = d[0];
               bool flag = true;
               for(int i=1;i<n;i++){
                         if(a[i-1]<d[i] || !a[i-1] || !d[i]) a[i] = a[i-1]+d[i];
                         else {
                                  flag = false;
                                  break;
                                   
                         }
               }
               
               if(!flag) cout<<-1;
                         
               else { for(int i=0;i<n;i++) cout<<a[i]<<" "; }
                cout<<"\n";
                
                
       }
       
       return 0;
       
}
