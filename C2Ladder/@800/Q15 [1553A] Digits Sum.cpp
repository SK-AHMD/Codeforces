 
// sk
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int count =0;
        int mod = n%10;
        if( mod < 9) cout<<n/10<<"\n";
        else cout<<(n/10) + 1<<"\n";

    }
    return  0;   
}
