// sk
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int cnt(0);
        for(int i=0;i<n;i++){
            if(s[i]!=s[i+1]) cnt++;
            
        }
        int max = a*n + ((b>=0)? (b*n) : (b*(cnt/2+1)));
        cout<<max<<"\n";
        
    }
    return 0;
    
}
