#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,count=0,prod=1,temp=0;
    cin>>n;
    vector<long long> ar(n);
    for(long long i=0;i<n;i++)
        cin>>ar[i];
    for(long long i=0;i<n;i++)
    {
        if(ar[i]>1)
        {
            count+=ar[i]-1;
            ar[i]=1;
        }
        else if(ar[i]<-1)
        {
            count+=-1-ar[i];
            ar[i]=-1;
        }
    }
    for(auto i: ar)
    {
        if(i!=0)
            prod*=i;
        else 
            temp++;
    }
    if(temp==0)
    {
        if(prod==-1)
        count+=2;
    }
    else
    {
        count+=temp;
    }    
    cout<<count;
    return 0;
}