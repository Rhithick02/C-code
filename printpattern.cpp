#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0;
        cin>>n;
        int ar[n][n];
        for(int k=0;k<=2*(n-1);k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i+j==k)
                    {
                        a++;
                        ar[i][j]=a;
                    }
                }                    
            }            
        }
        for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                cout<<ar[i][j]<<" ";                                    
                cout<<endl;
            }       
    }
    return 0;
}