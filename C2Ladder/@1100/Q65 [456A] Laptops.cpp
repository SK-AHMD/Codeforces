// sk 
#include <bits/stdc++.h>
using namespace std;
int main(){
          int n;
          cin>>n;
          vector<pair<int,int>> v;
          
          for(int i=0;i<n;i++){
                    int a , b;
                    cin>>a>>b;
                    v.push_back({a,b});
                    
          }
          sort(v.begin(),v.end());
          bool f=0;
          
          for(int i=0;i<n-1;i++){
                    if(v.at(i).second>v.at(i+1).second){
                              f=1;
                              break;
                    } 
                              
          }
           if(f) cout<<"Happy Alex\n";
           else cout<<"Poor Alex\n";
           
           return 0 ;
           
}
