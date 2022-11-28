// Codeforces contest #761 QB
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=2;i<n-1;i++){
            if(__gcd(i,n-1)==1){
            cout<<i<<" "<<n-i-1<<" "<<1<<"\n";
            break;
            }
        }
    }
    return 0;
}
