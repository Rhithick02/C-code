#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    lli n,t;
    cin>>n;
    vector<lli> ar(n),as(n),sum;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        as[i]=ar[i];
    }
    sort(as.begin(),as.end());
    for(int i=1;i<n;i++)
    {
        ar[i]+=ar[i-1];
        as[i]+=as[i-1];
    }
    cin>>t;
    lli type,l,r;
    for(lli i=0;i<t;i++)
    {
        lli temp=0;
        cin>>type>>l>>r;
        if(type==1)
        {
            if(l==1)
                temp=ar[r-1];
            else
                temp=ar[r-1]-ar[l-2];
        }
        else
        {
            if(l==1)
                temp=as[r-1];
            else
                temp=as[r-1]-as[l-2];        
        }        
        sum.push_back(temp);
    }
    for(lli i=0;i<sum.size();i++)
        cout<<sum[i]<<endl;
    return 0;
}