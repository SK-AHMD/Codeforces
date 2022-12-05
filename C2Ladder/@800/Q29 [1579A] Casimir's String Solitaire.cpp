// sk 

#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;

while(t--){
    string s;
    int ct=0;
    int cb=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A' || s[i]=='C'){
            ct++;
        }
        else{
            cb++;
        }
    }
if(ct==cb){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
  return 0;

}
