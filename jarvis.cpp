#include<bits/stdc++.h>
using namespace std;
int temp,ind;
int main()
{
    int t,count;
    cin>>t;
    char ar[1000000];
    while(t--)
    {
        count=0;
        cin>>ar;
        for(int i=0;i<strlen(ar);i++)
        {
            ind=i;
            temp=ar[i];
            for(int j=i+1;j<strlen(ar);j++)
            {
                
                if(ar[j]<temp)
                {
                    temp=ar[j];
                    ind=j;
                }
            }         
            ar[ind]=ar[i];
            ar[i]=temp;          
        }
        for(int i=0;i<strlen(ar)-1;i++)
        {
            if(ar[i]!=ar[i+1]-1)
            {
                count=-1;
                break;
            }
        }
        if(count==0)
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
    return 0;
}