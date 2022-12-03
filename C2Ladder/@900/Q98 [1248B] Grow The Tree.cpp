//sk
#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
long long  x=0, y=0;
for(int i=0;i<n;i++){
    if(i<n/2){
      x+=a[i];
    }else{
        y+=a[i];
   }
}
cout<<x*x+y*y<<endl;
return 0;
  
}
