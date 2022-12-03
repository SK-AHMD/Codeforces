//sk
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
int n, k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
int x=k+a[0];
int count=0;
for(int i=0;i<n;i++){
    if(abs(a[i]-x)<=k){
        count++;
    }
}
if(count==n){
    cout<<x<<endl;
}
else{
    cout<<"-1"<<endl;
}

}
return 0;
}
