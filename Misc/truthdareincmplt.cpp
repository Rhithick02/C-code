//incomplete
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,countt,countd;
    cin>>t;
    while(t--)
    {
        countt=countd=0;
        int rt,rd,st,sd;
        cin>>rt;
        int ramtruth[rt];
        for(int i=0;i<rt;i++)
        cin>>ramtruth[i];
        cin>>rd;
        int ramdare[rd];
        for(int i=0;i<rd;i++)
        cin>>ramdare[i];
        cin>>st;
        int shyamtruth[st];
        for(int i=0;i<st;i++)
        cin>>shyamtruth[i];
        cin>>sd;
        int shyamdare[sd];
        for(int i=0;i<sd;i++)
        cin>>shyamdare[i];
        for(int i=0;i<st;i++)
        {
            for(int j=0;j<rt;j++)
            {
                if(shyamtruth[i]==ramtruth[j])
                countt++;
            }
        }
        for(int i=0;i<sd;i++)
        {
            for(int j=0;j<rd;j++)
            {
                if(shyamdare[i]==ramdare[j])
                countd++;
            }
        }
        if(countt==st&&countd==sd)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;        
    }
    return 0;
}