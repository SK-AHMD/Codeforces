// sk 
#include <bits/stdc++.h>
using namespace std;
int main() {
         int t;
         cin>>t;
         while(t--){
                   int n,m;
                   cin>>n>>m;
                   if(n>m) swap(n,m);
                   int ans = 2*(n-1);
                   if(n==1 && m>2) cout<<-1<<"\n";
                   else {
                             if((m-n)%2==0) cout<<ans+((m-n)/2)*4<<"\n";
                             else cout<<ans + ((m-n)/2)*4+1<<"\n";   
                 }
             }
    return 0;   
}
