//sk 
#include <bits/stdc++.h>
using namespace std;
int main(){
          string s;
          cin>>s;
          string a = "";
          int n = s.size();
          bool flag = true;
         for(int i=0;i<n;i++){
                if(s.substr(i,3)=="WUB"){
                        if(!flag) cout<<" ";
                        i+=2;      
                   }
                   else {
                       flag = false;
                       cout<<s[i];
                  }    
              }

          return 0;   
      }
