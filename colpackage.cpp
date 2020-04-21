#include<bits/stdc++.h>
using namespace std;
void sawp(int &a, int &b)
{
    int c=a;
    a=b;
    b=c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int row[n+1],col[n+1],count=0;
        for(int i=1;i<=n;i++)
            cin>>row[i]>>col[i];
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(row[i]>row[j])
                {
                    swap(row[i],row[j]);
                    swap(col[i],col[j]);
                }
                else if(row[i]==row[j] && (col[i]>col[j]))
                {
                    swap(row[i],row[j]);
                    swap(col[i],col[j]);
                }
            }
        }
        for(int i=1;i<n;i++)
        {
            if(col[i]>col[i+1])
            {
                count=-3;
                cout<<"NO\n";
                break;
            }
        }
        if(count>-1)
        {
            row[0]=col[0]=0;
            cout<<"YES\n";
            for(int i=0;i<n;i++)
            {
                if(row[i]==row[i+1])
                {
                    for(int temp=col[i+1];(temp-col[i])!=0;temp--)
                        cout<<"U";
                }
                else
                {
                    int tempr=row[i+1],tempc=col[i+1];
                    for(;(tempr-row[i])!=0;tempr--)
                        cout<<"R";
                    for(;(tempc-col[i])!=0;tempc--)
                        cout<<"U";
                }                
            }
        }
        cout<<endl;
    }
    return 0;
}