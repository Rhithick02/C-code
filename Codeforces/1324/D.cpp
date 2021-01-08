#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main()
{
    lli n,count=0;
    cin>>n;
    lli a[n],b[n];
    vector <lli> temp;
    for(lli i=0;i<n;i++)
        cin>>a[i];
    for(lli i=0;i<n;i++)
    {
        cin>>b[i];
        temp.push_back(a[i]-b[i]);
    }
    sort(temp.begin(),temp.end());
    lli buf=upper_bound(temp.begin(),temp.end(),0)-temp.begin();
    lli size=n-buf;
    count=size*(size-1)/2;
    if(temp[n-1]<=0)
        cout<<"0";
    else
    {
        for(lli i=0;temp[i]<=0;i++)
        {
            buf=upper_bound(temp.begin(),temp.end(),abs(temp[i]))-temp.begin();
            count+=n-buf;
        }
        cout<<count;
    }
    cout<<endl;        
    return 0;
}