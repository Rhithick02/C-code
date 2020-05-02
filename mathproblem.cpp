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

    vector< bool > wh(50001,true);
    wh[1]=0;
    for(int i=2;i<=50000;i++)
        if(wh[i])
            for(int j=2*i;j<=50000;j+=i)
                wh[j]=false;

    while(t--)
    {
        int n;
        lli prod=1;
        cin>>n;
        if(n==0 || n==1)
            cout<<"1";
        else        
        {
            vector< int> pri(50000, 0);
            for(int i=2;i<=n;i++)
            {
                if(!wh[i])
                    continue;
                int te=n;
                while(te)
                    pri[i]+=(te/i), te/=i;
            }
            for(int i=2;i<=n;i++)
                prod*=(pri[i]+1),prod%=mod;
            cout<<prod;
        }
        cout<<endl;
    }
    return 0;
}