#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,sum,temp,org=0,i=1,orga=0,orgb=0;
    cin>>a>>b;
    sum=a+b;
    while(sum>0)
    {
        temp=sum%10;
        if(temp!=0)
        {
            org=org +i*temp;
            i*=10;
        }
        sum/=10;
    }
    i=1;
    while(a>0)
    {
        temp=a%10;
        if(temp!=0)
        {
            orga=orga +i*temp;
            i*=10;
        }
        a/=10;
    }
    i=1;
    while(b>0)
    {
        temp=b%10;
        if(temp!=0)
        {
            orgb=orgb +i*temp;
            i*=10;
        }
        b/=10;
    }
    if(orga+orgb==org)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}