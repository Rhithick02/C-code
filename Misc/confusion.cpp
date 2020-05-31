#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,qv,count=0;
    cin>>n>>q;
    int ar[n],freq[100000],pri[n],qval[n];
    for(int i=0;i<100000;i++)
    freq[i]=0;
    for(int i=0;i<n;i++)
    cin>>ar[i];
    for(int i=n-1;i>=0;i--)
    {
        freq[ar[i]]++;
        if(freq[ar[i]]==1)
        count++;
        qval[i]=count;
    }
    for(int i=0;i<q;i++)
    {
        cin>>qv;
        cout<<qval[qv-1]<<endl;
    }
    
}