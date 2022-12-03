 
   // sk
 #include<bits/stdc++.h>

using namespace std;
int main()
{
      int k;
      cin>>k;
      int arr[12];
      for(int i=0;i<12;i++){
          cin>>arr[i];

      }
      sort(arr,arr+12);
      reverse(arr,arr+12);

      if(k==0){
          cout<<0<<"\n";

      }
      else {
      int count=0;
        int j=0;

      for(int i=0;i<12;i++){
          count+=arr[i];
            j++;
            if(count>=k) break;
            
      }
      if(count<k) cout<<-1<<"\n";
      else cout<<j<<"\n";

      }
  return 0;
  

}

 
