// sheikh 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        double a,b,x,y;
        cin>>a>>b>>x>>y;
        double ans = log10(a/x) + b-y;
        if(ans==0) cout<<"=\n";
        else if(ans>0) cout<<">\n";
        else cout<<"<\n";
        
    }
    return 0;
    
}
