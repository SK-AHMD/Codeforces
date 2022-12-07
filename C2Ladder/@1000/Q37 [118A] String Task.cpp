        // sheikh 
            
        #include <bits/stdc++.h>
        using namespace std;
        int main() {
        string t;
        cin>>t;
        string s;


        for(int i=0;i<t.size();i++){
            t[i]=tolower(t[i]);
            
        }

        for(int i=0;i<t.size();i++){
            if(t[i]=='a' || t[i]=='e' || t[i]=='i'|| t[i]=='o'|| t[i]=='u'|| t[i]=='y'){
                continue;

            }
            else {
                s+='.';
                s+=t[i];

            }
            
        }
       
    

            cout<<s<<endl;

        return 0;
        }

 
