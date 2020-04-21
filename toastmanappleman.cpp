#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,score=0,sum=0;
    cin>>n;
    vector <long long int> ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    if(n>1)
        score=sum*2;
    else 
        score=sum;
    sort(ar.begin(),ar.end());
    for(long long int j=0;j<n-2;j++)
    {
        score=score + (sum-ar[j]);
        sum-=ar[j];
    }        
    cout<<score;
    return 0;
}