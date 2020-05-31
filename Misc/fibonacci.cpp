//incomplete
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,k;
    cin>>n>>k;
    ll fb[n],sum;
    if(n<k)
    cout<<"1";
    for(ll i=0;i<n;i++)
    {
        if(i<k)
        fb[i]=1;
        else
        {
            sum=0;
            for(ll j=i-1;j>=i-k;j--)
            {
                sum+=fb[j];
            }
            sum%=1000000007;
            
        }
        
    }

}