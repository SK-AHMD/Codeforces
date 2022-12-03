#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum(0);
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            
        }
        if(sum==0){
            cout<<"NO\n";
            
        }
        else {
            cout<<"YES\n";
            if(sum>0){
                sort(arr,arr+n,greater<int>());
                for(int i =0; i<n;i++){
                    cout<<arr[i]<<" ";
                    
                }
                cout<<"\n";
            }
            else {
                sort(arr,arr+n);
                for(int j=0;j<n;j++){
                    cout<<arr[j]<<" ";
                    
                }
                cout<<"\n";
            }
        } 
        
    }
    return 0;
    
}
