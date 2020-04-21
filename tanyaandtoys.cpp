#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    int ar[1000001],temp[1000001]={0};
    for(int i=1;i<n+1;i++)
    {
        cin>>ar[i];
        temp[i]=i;
    }
    for(int i=1,k=0;i<n+1;i++)
    {
        if(ar[k]==temp[i])
            k++;
        else if(m>=i)
        {
            count++;
            m-=i;
            temp[i]=-1;
        }
    }
    cout<<count<<endl;
    for(int i=0;i<n;i++)
    {
        if(temp[i]==-1)
            cout<<i<<" ";
    }
    return 0;
}