#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int count[1000001]={0};
    for(int i=0;i<n;i++)
    {
        cin>>k;
        count[k]++;
    }
    for(int i=0;i<1000001;i++)
    {
        if(count[i]==1)
        cout<<i<<" ";
    }
    return 0;
}