#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int ar[n][n],in[2];
        for(int i=0;i<k;i++)
        {
           cin>>in[0]>>in[1];
           for(int x=0;x<n;x++)
           {
               for(int j=0;j<n;j++)
               {
                   if(x==in[0]-1&&j==in[1]-1)
                   {
                       for(int b=0;b<n;b++)
                       {
                           ar[in[0]-1][b]=0;
                           ar[b][in[1]-1]=0;
                       }
                   }
               }
           }            
        }
        int count=0;
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(ar[i][j]!=0)
            count++;
        }
        if(count==0)
        cout<<"Impossible\n";
        else
        cout<<count<<" "<<n*n<<endl;
    }
    return 0;
}
