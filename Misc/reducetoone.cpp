#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int ar[n];
        for(int i=0;i<n;i++)
        ar[i]=i+1;
        for(int i=n-1,j=0;i!=j;j++)
        {
            ar[i]=(ar[i]*ar[j])+ar[i]+ar[j];
        }
        cout<<ar[n-1]%1000000007<<endl;
    }
    return 0;
}