// sk
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long  n,k;
        cin>>n>>k;
        if(n%k!=0){
            long long  a = k*(n/k);
           long long ans = a+k/2;
           cout<<min(ans,n)<<endl;    
        }
        else cout<<n<<"\n";
    }
  return 0;
  
}
