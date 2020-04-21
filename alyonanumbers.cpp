#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cha,num;
    long long count=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cha=i/5;
        count+=(m+i-5*cha)/5;
    }
    cout<<count;
    return 0;
}