  // sk
  #include <bits/stdc++.h>
  using namespace std;
  int main() {
      string s , a = "hello";
      cin>>s;
      int cnt(0);
      int j=0;
      for(int i=0;i<s.length();i++){
          if(a[j]==s[i]){
              cnt++;
              j++;
              
          }
          if(cnt==5) break;
          
          
      }
      if(cnt==5) cout<<"YES\n";
      else cout<<"NO\n";
      return 0;
      
      

  }
