//Ugly numbers- prime factors only 2,3,5. Like 1,2,3,4,5,6,8,9,10,12
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define fi first
#define se second

int main(){
    int n,m2,m3,m5,temp,x=2,y=3,z=5;
    m2=m3=m5=1;
    cin>>n;
    vi ugly(n+1);
    ugly[1]=1;
    for(int i=2;i<=n;i++)
    {
        ugly[i]=min(x,min(y,z));
        if(ugly[i]==x)
        {
            m2++;
            x=ugly[m2]*2;
        }
        if(ugly[i]==y)
        {
            m3++;
            y=ugly[m3]*3;
        }
        if(ugly[i]==z)
        {
            m5++;
            z=ugly[m5]*5;
        }
    }
    cout<<ugly[n]<<endl;
    return 0;
}