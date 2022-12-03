// sk 
#include <bits/stdc++.h>
using namespace std;
int main( ){
          int n,d;
          cin>>n>>d;
          int sum(0);
          
          for(int i=0;i<n;i++){
                    int x;
                    cin>>x;
                    sum+=x;
                    
          }
          
          if(d < sum+(n-1)*10) cout<<-1<<"\n";
          else cout<<(d-sum)/5<<"\n";
        
    return 0;
      
}
