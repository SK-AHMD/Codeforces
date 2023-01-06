#include <bits/stdc++.h>
using namespace std;
int main() {
          int t;
          cin>>t;
          while(t--){
                    int n;
                    cin>>n;
                    int ev,od,a;
                    ev=od=INT_MIN;
                    int res(1);
                    for(int i=0;i<n;i++){
                            cin>>a;
                            if(a%2){
                                      if(a>=ev) ev = a;
                                      else res = 0;
                            }
                            else {
                                     if(a>=od) od=a;
                                     else res = 0;
                            }
                    }
                    if(res) cout<<"YES\n";
                    else cout<<"NO\n";
                    
          }
          return 0;
          
          
}
