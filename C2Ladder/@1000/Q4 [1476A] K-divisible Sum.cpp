// sk

#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(n==k) cout<<1<<"\n";
		else if(n>k){
			if(n%k==0) cout<<1<<"\n";
			else cout<<2<<"\n";

		}
		else {

			if(k%n) cout<<k/n + 1<<"\n";
			else cout<<k/n<<"\n";

		}
	}
	return 0;
	
}
