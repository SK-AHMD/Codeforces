// sk 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;  
    vector<int> v(n);

    for(int i =0;i<n;i++){
        int f , t;
        cin>>f>>t;
       if(t>k) v[i] = f-(t-k);
       else v[i] = f ;
    }
    sort(v.begin(),v.end());
    cout<<v[n-1]<<"\n";
    return 0;
    
}
 
