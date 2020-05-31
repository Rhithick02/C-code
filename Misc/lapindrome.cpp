#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector <string> s,s1,s2;
        cin>>s;
        if(s.length()%2==0)
        {
            for(int i=0,j=s.length()/2;i<s.length()/2&&j<s.length();i++,j++)
            {
                s1=s[i];
                s2=s[j];                            
            }
        }
        else
        {
            for(int i=0,j=s.length()/2+1;i<s.length()/2&&j<s.length();i++,j++)
            {
                s1=s[i];
                s2=s[j];
            }
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;    
    }
    return 0;
}