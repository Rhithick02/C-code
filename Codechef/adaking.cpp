#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c,k;
        cin>>r>>c>>k;
        int r1,r2,c1,c2;
        r1=r2=r;
        c1=c2=c;
        for(;k>0;k--)
        {
            r1++;
            r2--;
            c1++;
            c2--;
        }
        if(r1>8)
        r1=8;
        if(r2<1)
        r2=1;
        if(c1>8)
        c1=8;
        if(c2<1)
        c2=1;
        cout<<(r1-r2+1)*(c1-c2+1)<<endl;
    }
    return 0;
}