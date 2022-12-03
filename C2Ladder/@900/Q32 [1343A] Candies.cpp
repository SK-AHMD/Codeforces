//sk 
#include <bits/stdc++.h>
using namespace std;
int main() {
	  int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    for(int k=2;;k++){
     int sum =pow(2,k)-1;
     if(n%sum ==0){
         cout<<n/sum<<endl;
         break;
       }
    }
  }
  return 0; 
}
