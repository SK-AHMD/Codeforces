  // sk 
    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        int t;
        cin>>t;
        while(t--){
           int n,k;
           cin>>n>>k;
           string s;
           cin>>s;
           bool flag = true;

           if(k*2>=n) flag= false;
           for(int i=0;i<k;i++){
               if(s[i]!=s[n-i-1]) flag = false;

           } 
           cout<<(flag?"YES\n": "NO\n");
        }
        return 0;
        
    }
