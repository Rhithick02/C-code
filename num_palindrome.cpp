#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        for(int i=0;i<n;i++)
        {
            for(int j=i+2;j<n;j++)
            {
                if(ar[i]==ar[j])
                {
                    count++;
                    break;
                }
            }
        }
        if(count!=0)
            cout<<"YES\n";
        else 
        {
            for(int i=0;i<n;i++)
            {  
                if(ar[i]==ar[i+3] && ar[i+1]==ar[i+2])
                {
                    count++;
                    break;
                }
            }
            if(count>0)            
                cout<<"YES\n";
            else 
                cout<<"NO\n";
        }
    }
    return 0;
}