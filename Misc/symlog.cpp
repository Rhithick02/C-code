#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,temp,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        char ar[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>ar[i][j];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                if(ar[j][i]!=ar[n-1-j][i])
                {
                    count=-1;
                    break;
                }
            }
            if(count==-1)
                break;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n/2;j++)
            {
                if(ar[i][j]!=ar[i][n-1-j])
                {
                    count=-1;
                    break;
                }
            }
            if(count==-1)
                break;
        }
        if(count==-1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}