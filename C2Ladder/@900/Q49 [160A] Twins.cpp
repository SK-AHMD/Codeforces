#include <bits/stdc++.h>
using namespace std;

int test(int arr[],int h){
    int sum(0);

    for(int i=0;i<h;i++)
          sum+=arr[i];
      return sum;
}

int main() {
	
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int comp=0;
    
    for(int i=n-1;i>=0;i--){
        comp+=arr[i]; 
        if(comp>test(arr,i) && i>=0) {cout<<n-i<<endl;break;}
    }
  return 0;
}
