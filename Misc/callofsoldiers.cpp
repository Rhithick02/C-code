#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,count=0,person=0;
    cin>>n>>m>>k;
    int ar[m+1];
    for(int i=0;i<m+1;i++)
        cin>>ar[i];
    for(int i=0;i<m;i++)
    {
        count=0;
        while(ar[i]!=0 || ar[m]!=0)
        {
            if(!((ar[m] & 1==1 && ar[i] & 1==1) ||(ar[m] | 1==0 && ar[i] | 0==00)))
            {
                count++;
                ar[i]=ar[i]>>1;
                ar[m]=ar[m]>>1;
            }
            if(count<k)
                person++;
        }
    }
    cout<<person;
    return 0;    
}