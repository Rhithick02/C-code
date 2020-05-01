#include<bits/stdc++.h>
using namespace std;

#define lli long long
#define mod 1000000007

int main()
{
    int n;
    cin>>n;
    if(n==0)
        cout<<"0\n";
    else if(n==1)
        cout<<"1\n";
    else if(n==2 || n==3)
        cout<<"2\n";
    else 
    {
        vector<int> prime(n+1),store;
        for(int i=2;i<=n;i++)
            prime[i]=i;
        for(int i=2;i<=sqrt(n);i++)
        {   
            if(prime[i]!=0)
            {
                for(int j=2;j<=n;j++)
                {
                    if(prime[i]*j<=n)
                        prime[prime[i]*j]=0;
                    else 
                        break;
                }
            }
        }
        int quotient,count;
        for(int i=2;i<=sqrt(n);i++)
        {
            count=0;
            quotient=n/i;
            while(quotient>=1)
            {
                count+=quotient;
                quotient/=i;
            }
            if(count!=0)
                store.push_back(count+1);
        }
        lli prod=1;
        for(int i=0;i<store.size();i++)
        {
            prod*=store[i];
            prod%=mod;
        }
        cout<<prod<<endl;
    }
    return 0;
}