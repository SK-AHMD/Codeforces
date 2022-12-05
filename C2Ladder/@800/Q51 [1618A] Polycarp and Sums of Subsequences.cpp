#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int arr[7];
    
    while(t--){
        for(int i=0;i<7;i++){
            cin>>arr[i];
            
        }
        int a= arr[0];
        int b=arr[1];
        int c= arr[6]-a-b;
        cout<<a<<" "<<b<<" "<<c<<"\n";
        
    }
   
    return 0;
}
