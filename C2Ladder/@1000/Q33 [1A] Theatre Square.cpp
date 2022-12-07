// sheikh
#include <bits/stdc++.h>
using namespace std;
int main(){
   unsigned long long n,m,c;
    cin>>n>>m>>c;
   unsigned long long  x,y;
    
    if(n%c==0){
        x= n/c;
    }
   
    else {
        x=n/c+1;

    }
    if(m%c==0){
        y=m/c;
     } else {

      y=m/c+1;

    }
    cout<<x*y<<"\n";

    return 0;  
}
