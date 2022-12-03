    // sk
    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    int t;
    cin>>t;
    while(t--){
     int a , b;
     cin>>a>>b;
     int x , y;
     cin>>x>>y;
    if(a>b) swap(a,b);
    if(x>y) swap(x,y);
    if(a+x==y && a+x==b) cout<<"YES\n";
    else cout<<"NO\n"; 
    }
    return 0;
   }
