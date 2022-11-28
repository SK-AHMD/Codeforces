//sk 
#include <bits/stdc++.h>
using namespace std;
int main(){
          int t;
          cin>>t;
          while(t--){
                    int n;
                    cin>>n;
                    int arr[n];
                    for(int i=0;i<n;i++) cin>>arr[i];
                    sort(arr,arr+n);
                    
                    bool flag = false;
                    
                    if(n>=3){
                          for(int i=2;i<n;i++){
                              if(arr[i-2]==arr[i-1] && arr[i]==arr[i-1]){ cout<<arr[i]<<"\n";flag=true;break;}
                                    
                          }  
                          if(flag==false) cout<<-1<<"\n";
                          
                    }
                   if(n<3) cout<<-1<<"\n";
                   
          }
          return 0;
          
}
