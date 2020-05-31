#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int prod=1;
        int n;
        cin>>n;
        for(int i=2;i<=n;i++)
            prod*=i;
        cout<<prod<<endl;
    }
}