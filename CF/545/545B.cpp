#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    string s,t;
    int count=0;
    cin>>s>>t;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=t[i])
            count++;
    }
    if(count&1)
        cout<<"impossible";
    else
    {
        int z=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=t[i])
            {
                if(z&1)
                {
                    if(s[i]=='0')
                        cout<<"1";
                    else 
                        cout<<"0";
                }
                else 
                {
                    if(t[i]=='0')
                        cout<<"1";
                    else 
                        cout<<"0";
                }
                z++;
            }
            else 
                cout<<s[i];
        }
    }
    return 0;
}