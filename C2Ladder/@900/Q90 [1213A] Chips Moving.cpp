// sk 
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int odd=0,even=0;
    while(n--){
        int a;
        cin>>a;

        if(a%2) even++;
        else odd++;

    }
    cout<<min(odd,even)<<"\n";
    return 0;


    
}
