#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int x[m+1];
	int ans(0);
	for(int i=0;i<m+1;i++) cin>>x[i];
		int cnt(0);
	for(int i=0;i<m;i++){
		 int cnt(0);
		for(int j=0;j<n;j++)
		{
			if(((x[i]>>j)&1)!=((x[m]>>j)&1))
				cnt++;
		}
			if(cnt<=k)
				ans++;

	}

	cout<<ans<<"\n";
	return 0;


}


	
 
