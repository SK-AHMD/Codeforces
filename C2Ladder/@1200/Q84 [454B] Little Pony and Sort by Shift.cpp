// bismillahir rahmanir rahim 
// myself Sheikh Ahmadullah 
// Ramadan mubarak to all
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
		int a,b(0);

	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]) {a=i;b++;}

	}
	if(arr[n-1]>arr[0]) {a=n-1;b++;}
	if(b==0) cout<<0<<"\n";

	else if(b>1) cout<<-1<<"\n";
	else cout<<n-a-1<<"\n";
	return 0;


}
		
 
