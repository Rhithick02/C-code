#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int open,close;
        cin>>open>>close;
        int ar[close+1];
        for(int i=2;i<=close;i++)
            ar[i]=i;
        for(int i=2;i<sqrt(close);i++)
        {
            if(ar[i]!=0)
            {
                for(int j=2;j<=close/i;j++)
                    ar[j*ar[i]]=0;
            }
        }
        for(int i=open;i<=close;i++)
        {
            if(ar[i]!=0)
                cout<<ar[i]<<endl;
        }
    }
    return 0;
}