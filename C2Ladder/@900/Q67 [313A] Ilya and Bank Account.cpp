// sk 
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;
    if(n<0){
        int t=n%10;
        int q=n/100;
        int p=q*10+t;
        int m=n/10;
    if(p>m){cout<<p<<endl;}
    else{
        cout<<m<<endl;
    }
    }else{
        cout<<n<<endl;
    }
    return 0;
  
}
