#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,dec,bit,n1,n2;
    cin>>n>>q;
    int ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    while(q--)
    {
        cin>>dec;
        if(dec==1)
        {
            cin>>bit;
            if(ar[bit-1]==0)
            ar[bit-1]=1;
            else 
            ar[bit-1]=0;
        }
        else 
        {
            cin>>n1>>n2;
            if(ar[n2-1]==1)
            cout<<"ODD\n";
            else 
            cout<<"EVEN\n";
        }
    }
    return 0;
}