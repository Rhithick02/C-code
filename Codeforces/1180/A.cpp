#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,countrem=0;
    cin>>n;
    if(n==1)
        cout<<"1 ";
    else
    {
        countrem=(2*n-1)/2;
        sum=n*n + countrem*countrem;
        cout<<sum<<endl;
    }
    return 0;
}