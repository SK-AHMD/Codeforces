//sk
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2) cout<<"-1\n";
        else {
            for(int i=1;i<=n*n;i+=2) cout<<i<<" ";
            for(int j=2;j<=n*n;j+=2) cout<<j<<" ";
            cout<<"\n";
            
            
        }
    }
    return 0 ;
    
}
