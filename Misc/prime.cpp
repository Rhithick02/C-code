#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=2;i<=n;i++)
        ar[i]=i;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(ar[i]!=0)
        {
            for(int j=2;j<=n;j++)
            {
                if(ar[i]*j<=n)
                    ar[ar[i]*j]=0;
                else 
                    break;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(ar[i]!=0)
            cout<<ar[i]<<" ";
    }
    return 0;
}