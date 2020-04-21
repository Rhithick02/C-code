#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp,rem;
        cin>>n;
        temp=n/6;
        rem=n%6;
        if(temp%2==0)
        {
            if(rem==0)
            cout<<n-11<<" WS";
            else if(rem==1)
            cout<<n+11<<" WS";
            else if(rem==2)
            cout<<n+9<<" MS";
            else if(rem==3)
            cout<<n+7<<" AS";
            else if(rem==4)
            cout<<n+5<<" AS";
            else if(rem==5)
            cout<<n+3<<" MS";
            cout<<endl;
        }
        else
        {
            if(rem==0)
            cout<<n+1<<" WS";
            else if(rem==1)
            cout<<n-1<<" WS";
            else if(rem==2)
            cout<<n-3<<" MS";
            else if(rem==3)
            cout<<n-5<<" AS";
            else if(rem==4)
            cout<<n-7<<" AS";
            else if(rem==5)
            cout<<n-9<<" MS";
            cout<<endl;
        }
    }
    return 0;
}