#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ar[3][3],count=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>ar[i][j];
                if(j==1 && (i==1 || i==2))
                {
                    if(ar[i][j]=='l')
                    count++;
                    break;
                }

            }
            
        }
        if(count==0)
        cout<<"no"<<endl;
        else
        {
            count=0;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    if(j==1 && (i==1 || i==2))
                    {
                        if((ar[i][j+1]==ar[i][j]||ar[i][j-1]==ar[i][j])&&(ar[i+1][j]==ar[i][j]||ar[i-1][j]==ar[i][j]))
                        count++;
                    }
                }
            }
            if(count==0)
            cout<<"no"<<endl;
            else
            cout<<"yes"<<endl;
            
        }
        
    }
    return 0;
}