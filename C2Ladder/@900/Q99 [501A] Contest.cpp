 
// sk 
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long  a ,b,c,d;
    cin>>a>>b>>c>>d;
    long long j  = max(((3*a)/10),(a-((a/250)*c)));
    long long k = max(((3*b)/10), (b-((b/250)*d)));
    if(j>k) cout<<"Misha\n";
    else if(j<k) cout<<"Vasya\n";
    else cout<<"Tie\n";
    return 0;

}
 
