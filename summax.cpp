#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0,count=0;
    cin>>n;
    vector <int> ar(n);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar.begin(),ar.end());
    for(int i=0;i<n;i++)
    {   
        if(ar[i]>=0)
        {
            sum+=ar[i];
            count++;
        }
    }
    if(count==0)
        cout<<ar[n-1]<<" 1";
    else 
        cout<<sum<<" "<<count;
    
}