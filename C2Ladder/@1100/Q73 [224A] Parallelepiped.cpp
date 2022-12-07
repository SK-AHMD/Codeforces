// sk
#include <bits/stdc++.h>
using namespace std;
int main() {

    int l,b,h;
    cin>>l>>b>>h;
    
    int x = 4*(sqrt((l*b)/h));
  int y= 4*(sqrt((b*h)/l));
  int z =4*(sqrt((l*h)/b));
  cout<<x+y+z<<"\n";
  
    return 0;
}
