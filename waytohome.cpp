#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,flag,count=0;
    cin>>n>>d;
    char ch[n];
    for(int i=0;i<n;i++)
        cin>>ch[i];
    if(d>=n)
        cout<<"1\n";
    else
    {
        for(int i=1;i<n;i++)
        {
            flag=0;
            for(int j=d+i-1;j>=i;j--)
            {
                if(ch[j]=='1')
                {
                    flag=1;
                    i=j;
                    break;
                }
            }
            if(flag!=1)
            {
                cout<<"-1\n";
                break;
            }
            count++;            
        }
        if(flag==1)
            cout<<count<<endl;
    }
    return 0;
}