#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,prod=1;
    cin>>n;
    if(n%2!=0)
        cout<<"0 ";
    else 
    {
        for(int i=1;i<=n/2;i++)
            prod*=2;
        cout<<prod;
    }
    return 0;
}