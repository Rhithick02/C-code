#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,cost1=0,cost2=0,temp;
    cin>>n>>m>>a>>b;
    temp=n;
    if(b<m*a)
    {
        while(temp>=m)
        {
            temp-=m;
            cost1+=b;
        }
        cost1+=temp*a;
        while(n>0)
        {
            n-=m;
            cost2+=b;
        }
        if(cost1>cost2)
            cout<<cost2;
        else
            cout<<cost1;
    }    
    else
    {
        cost1+=n*a;
        cout<<cost1;
    }    
    return 0;
}