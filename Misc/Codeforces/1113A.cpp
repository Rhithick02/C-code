#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v;
    cin>>n>>v;
    if(n-1<=v)
        cout<<n-1;
    else
    {
        int cost=v;
        for(int city=2;city<=n;city++)
        {
            cost+=city;
            if(n-city<=v)
                break;
        }
        cout<<cost;
    }
    return 0;
}