 
#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin>>n;
    for(int i=0;i<n.size();i++){
        if(n[i]>'4'){
            n[i]='9'-n[i]+'0';

        }else if(n[i]<='4'){
            n[i]=n[i];
            
        }
        

        }
        if(n.front()=='0'){
            n.front()='9';
            
        }
        cout<<n<<endl;
       return 0;
    }


 
