#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define lli long long
lli answer(lli dif,int k)
{
    if(k==0)
        return 1;
    if(k&1) return (answer(dif, k-1)*dif)%mod;
    lli t = answer(dif, k>>1);
    return (t*t)%mod;   
}
int main()
{
    int n,k;
    cin>>n>>k;
    long long sum=0;
    lli ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            sum=sum + answer(abs(ar[i]-ar[j]),k), sum%=mod;
    cout<<sum;
    return 0;
}