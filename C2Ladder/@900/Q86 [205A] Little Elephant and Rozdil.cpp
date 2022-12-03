    // sk

    #include <bits/stdc++.h>
    typedef unsigned long long ull;

    using namespace std;
    int main() {
        int n;
        cin>>n;
        int arr[n];
        int b[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
            b[i]=arr[i];
        }
        sort(b,b+n);


       if(b[0]<b[1]){
        for(int i=0;i<n;i++){
            if(arr[i]==b[0]) {
                cout<<i+1<<"\n";
                break;
                
            }
        }
        
    }
    else if(n==1){
        cout<<"1\n";
        
    }
    else {
        cout<<"Still Rozdil\n";

    }
  return 0;
  }
