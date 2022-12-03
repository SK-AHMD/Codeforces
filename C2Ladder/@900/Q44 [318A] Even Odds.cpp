    // sk
    #include <bits/stdc++.h>
    typedef unsigned long long ull;
    using namespace std;
    int main() {
        ull n,k;
        cin>>n>>k;
        if((n+1)/2>=k)
            cout<<k*2-1<<"\n";
        else
            cout<<(k-(n+1)/2)*2<<"\n";
      
        return 0;  
    }
