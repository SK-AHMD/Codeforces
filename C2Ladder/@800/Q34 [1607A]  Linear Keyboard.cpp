// sk
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string alpha;
        cin>>alpha;
        string s;
        cin>>s;
        unordered_map<char,int> m;
        int ans=0;
        if(s.size()>1){
            for(int i=0;i<s.size();i++){
                for(int j=0;j<alpha.size();j++){
                    if(s[i]==alpha[j]) m[s[i]]=j;
                    
                }
            }
            for(int k=0;k<s.size()-1;k++){
                ans+= abs(m[s[k]]-m[s[k+1]]);
                
            }
            cout<<ans<<"\n";
            
        } else if(s.size()==1) cout<<"0\n";
        
}
return 0;
}
