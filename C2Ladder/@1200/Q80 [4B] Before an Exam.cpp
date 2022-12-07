//sk
#include <bits/stdc++.h>
using namespace std;
int main() {
int d, t;
cin>>d>>t;
int mini(0),maxi(0),max[d],min[d];
int v[d];
for(int i=0;i<d;i++) {
cin>>min[i]>>max[i];
maxi+=max[i];
mini+=min[i];
v[i]=min[i];
}
if(mini<=t && maxi>=t){
cout<<"YES\n";

for(int i=0;i<d;i++){
	if(mini<t){
		
		while(v[i]<max[i]){
			if(mini==t) break;
			mini++;
			v[i]++;
			}
}
}
for(int i =0;i<d;i++)  cout<<v[i]<<" ";
cout<<"\n";
}
else cout<<"NO\n";

return 0;
}
