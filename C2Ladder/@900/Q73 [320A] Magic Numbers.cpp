 // sk
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j,k;
        string s;
        bool lifesucks=true;

        cin>>s;
        for(i=0;i<s.length();)
        {
            if(s[i]=='1' && s[i+1]=='4'  && s[i+2]=='4')
            {
                i+=3;
            }

            else if(s[i]=='1' && s[i+1]=='4')
            {
                i+=2;
            }

            else if(s[i]=='1')
            {
                i++;
            }

            else
            {
                lifesucks=false;
                break;
            }
        }

        if(lifesucks)
            cout<<"YES";
        else
            cout<<"NO";

        return 0;
}
 
