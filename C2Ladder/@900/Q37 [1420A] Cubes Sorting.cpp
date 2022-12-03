#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long  a[n];
        int cnt=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0){
                if(a[i-1]>a[i]) cnt++;
                else cnt=1; 
            }
        }
        if(cnt==n) cout<<"NO\n";
        else cout<<"YES\n"; 
    }
  return 0;
}
