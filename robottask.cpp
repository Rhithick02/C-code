#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,info=0,dir=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0,j=n-1;i<n && j>=0;i++,j--)
    {
        if(dir%2==0)
        {
            if(ar[i]>=0 && ar[i]<=info)
            {
                info++;
                ar[i]=-1;
            }
        }
        else if(dir%2!=0)
        {
            if(ar[j]>=0 && ar[j]<=info)
            {
                info++;
                ar[j]=-1;
            }
        }      
        if(info==n)
            break;      
        if((dir%2==0 && i==n-1) || (dir%2!=0 && j==0))  
        {
            dir++;
            j=n;
            i=-1;
        }                    
    }
    cout<<dir<<endl;
    return 0;
}