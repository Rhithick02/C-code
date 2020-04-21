#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1,k=0,sum=0,temp=0;
    cin>>n;
    int ar[n];
    vector <int> length(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        length[i]=0;
    }
    if(1)
    {
        for(int i=0;i<n;i++)
        {
            sum+=ar[i];
            i++;
        }
        if(sum==0)
            cout<<n-1;
        else if(sum==n/2*ar[0])
            cout<<n-2;
        else
            temp=1;
    }
    if(temp)
    { 
        for(int i=0;i<n;i++)
        {
            if(ar[i]<0 && ar[i-count]==(-1)*ar[i]) 
                count+=2;
            else if(count!=1)
            {
                length[k]=count-1;
                count=1;
                sum+=length[k++];
            }
            if(i==n-1 && count!=1)
            {
                length[k]=count-1;
                sum+=length[k++];
            }
        }
        sort(length.begin(),length.end());
        if(count!=1 && length[n-1]==0)
            cout<<count-1;
        else
            cout<<length[n-1];
    } 
    return 0;   
}