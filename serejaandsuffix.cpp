#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    int ar1[n];
    vector <int> ar2(m);
    for(int i=0;i<n;i++)
        cin>>ar1[i];
    for(int i=0;i<m;i++)
        cin>>ar2[i];
    
    for(int i=0;i<m;i++)
    {
        int ar[n];
        int z=0,flag=0,temp=0;
        for(int k=ar2[i]-1;k<n;k++)
        {   
            temp=0;
            if(z==0)
            {
                ar[z++]=ar1[k];
                flag++;
            }
            else
            {
                for(int w=0;w<z;w++)
                {
                    if(ar[w]==ar1[k])
                    {
                        temp=-1;
                        break;
                    }
                }
                if(temp==0)
                {
                    ar[z++]=ar1[k];
                    flag++;
                }            
            }
        }
        cout<<flag<<endl;
    }    
    return 0;
}