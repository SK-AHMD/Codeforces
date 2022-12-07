// sk
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> v(n);
        int cnt=1;
        for(int i=0;i<n;i++){
            cin>>v[i].first;
            v[i].second=i;
            
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++){
            if(v[i].second+1!=v[i+1].second) cnt++;
            
        }
        if(cnt<=k) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
    return 0;
    
}
