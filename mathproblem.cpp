#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define mod 1000000007
void primefactors(int n,int prime[])
{
    for(int i=2;i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            prime[i]++;
            n/=i;
        }
    }
    if(n>=2)
        prime[n]++;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        lli prod=1;
        cin>>n;
        if(n==0)
            cout<<"0\n";
        else if(n==1)
            cout<<"1\n";
        else        
        {
            int prime[n+1]={0};
            for(lli i=2;i<=n;i++)
                primefactors(i,prime);
            for(lli i=2;i<=n;i++)
            {
                if(prime[i]!=0)
                    prod*=(prime[i]+1);
                prod=prod%mod;
            }
            cout<<prod%mod<<endl;
        }
    }
    return 0;
}