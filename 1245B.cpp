#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,count=0;
        cin>>n>>a>>b>>c;
        char ch[n],ch2[n];
        for(int i=0;i<n;i++)
        {
            cin>>ch[i];
            ch2[i]='.';
        }
        for(int i=0;i<n;i++)
        {
            if(ch[i]=='R' && b>0)
            {
                count++;
                ch2[i]='P';
                b--;
            }
            else if(ch[i]=='P' && c>0)
            {
                count++;
                ch2[i]='S';
                c--;
            }
            else if(ch[i]=='S' && a>0)
            {
                count++;
                ch2[i]='R';
                a--;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a>0 && ch2[i]=='.')
            {
                ch2[i]='R';
                a--;
            }
            else if(b>0 && ch2[i]=='.')
            {
                ch2[i]='P';
                b--;
            }
            else if(c>0 && ch2[i]=='.')
            {
                ch2[i]='S';
                c--;
            }
        }
        if(count>=(n+1)/2)
        {
            cout<<"YES\n";
            for(int i=0;i<n;i++)
                cout<<ch2[i];
            cout<<endl;
        }
        else 
            cout<<"NO\n";
    }
    return 0;
}