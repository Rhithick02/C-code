#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long r,c,v1,v2,v3,v4;
    cin>>r>>c;
    long long f1,f2,sumr,sumc,sum=0;
    long long ar[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>ar[i][j];
    cin>>v1>>v2>>v3>>v4;
    f1=0;
    for(long long i=0;i<r;i++)
    {
        sumr=0;
        sum=0;
        for(long long j=0;j<c;j++)
        {
            sumr+=abs(ar[i][j]+v1);
            sum+=abs(ar[i][j]);
        }
        if(sumr>abs(c*v2))
        {
            if(sumr>sum)
                f1+=sumr;
            else
                f1+=sum;
        }
        else if(abs(c*v2)>sum)
            f1+=abs(c*v2);
        else
            f1+=sum;
    }
    f2=0;
    for(long long i=0;i<c;i++)
    {
        sumc=0;
        sum=0;
        for(long long j=0;j<r;j++)
        {
            sumc+=abs(ar[j][i]+v3);
            sum+=abs(ar[j][i]);
        }
        if(sumc>abs(r*v4))
        {
            if(sumc>sum)
                f2+=sumc;
            else 
                f2+=sum;
        }
        else if(abs(r*v4)>sum)
            f2+=abs(r*v4);
        else 
            f2+=sum;
    }
    if(f1>=f2)
        cout<<f1;
    else
        cout<<f2;
    return 0;
}