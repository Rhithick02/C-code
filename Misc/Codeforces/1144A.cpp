#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int ar[26]={0},flag=0;
        cin>>s;
        For(i,s.length())
        {
            ar[s[i]-'a']++;
            if(ar[s[i]-'a']>1) flag=-1;            
        }
        if(flag==-1)
            cout<<"NO";
        else 
        {
            For(i,26)
            {
                if(flag==0 && ar[i]==0)
                    continue;
                if(flag==0 && ar[i]!=0)
                    flag=1;
                else if(flag!=0 && ar[i]!=0)
                    flag++;
                else
                {
                    flag=-10;
                    break;
                }
                if(flag==s.length())
                    break;
            }
            if(flag==-10)
                cout<<"NO";
            else 
                cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}