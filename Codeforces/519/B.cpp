#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e1,e2;
    cin>>n;
    int ar1[n],ar2[n-1],ar3[n-2];
    for(int i=0;i<n;i++)
        cin>>ar1[i];
    for(int i=0;i<n-1;i++)
    {
        cin>>ar2[i];
        for(int j=0;j<n;j++)
        {
            if(ar2[i]!=ar1[j])
            {
                e1=ar1[i];
                break;
            }
        }
    }
    for(int i=0;i<n-2;i++)
    {
        cin>>ar3[i];
        for(int j=0;j<n-1;j++)
        {
            if(ar3[i]!=ar2[j])
            {
                e2=ar2[j];
                break;
            }
        }
    }
    cout<<e1<<endl<<e2;
return 0;
}
    
