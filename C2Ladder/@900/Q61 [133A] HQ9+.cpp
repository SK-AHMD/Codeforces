// sk
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n=0;
  
    for(int i =0;i<s.size();i++)
          if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
                  n++;
  
    if(n>0)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
    return 0;
  
}
