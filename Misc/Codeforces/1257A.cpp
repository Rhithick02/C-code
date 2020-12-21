#include<bits/stdc++.h>
int mod(int , int);
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        if(x==0)
        cout<<mod(a,b)<<endl;
        else if((a==1&&b==n)||(b==1&&a==n))
        cout<<mod(a,b)<<endl;
        else if((n-(mod(a,b)+1))>x)
        cout<<x+mod(a,b)<<endl;
        else
        cout<<n-1<<endl;
    }
    return 0;    
}
int mod(int a,int b)
{
    if(a-b>0)
    return a-b;
    else 
    return b-a;
}