// sk
#include <bits/stdc++.h>
using namespace std;
void test(){
    string n;
    cin>>n;
    int zero =0;
    int one =0;
    
    for(int i=0;i<n.size();i++){
        if(n[i]=='1') one++;
        else zero++;
        
    }
    if(n.size()<=2) cout<<0;
    else {
        if(zero==one) cout<<zero-1;
        else 
        
        cout<<min(zero,one);
        
    }
    cout<<"\n";
    
}
int main(){
    int n;
    cin>>n;
    while(n--){
        test();
        
    }
    
    
    return 0;
    
}
