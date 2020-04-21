#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,count=0;
    cin>>n;
    while(n>0)
    {
        if(n>=100 && (n-n%100)%100==0)
        {
            count+=(n-n%100)/100;
            n-=100*count;
        }
        else if(n>=20)
        {
            count++;
            n-=20;
        }
        else if(n>=10)
        {
            count++;
            n-=10;
        }
        else if(n>=5)
        {
            count++;
            n-=5;
        }
        else
        {
            count+=n;
            n=0;
        }
    }
    cout<<count;
    return 0;
}