#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int a[n],b[n];
    vector <int> temp(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        temp[i]=a[i]-b[i];
    }
    sort(temp.begin(),temp.end(),greater<int>());
    for(int i=0,j=n-1;i<n;i++)
    {
        for(;j>i && (temp[i]+temp[j]<=0);j--);
        if(j-i<=0)
            break;
        count+=j-i;
    }    
    cout<<count;
    return 0;
}