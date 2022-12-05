// sheikh 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"0\n";

        }
        else if(abs(a-b)%10==0){
            cout<<abs(a-b)/10<<"\n";

        }
        else {
            cout<<abs(a-b)/10 + 1<<"\n";

        }
    }
    return 0;
}
