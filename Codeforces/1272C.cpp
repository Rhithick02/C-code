#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main()
{
    lli n,k,pos=0,flag;
    lli sum=0;
    cin>>n>>k;
    string ch,temp;
    cin>>ch;
    char key;
    for(int i=0;i<k;i++)
    {
        cin>>key;
        temp+=key;
    }
    for(int i=0;i<n;i++)
    {
        flag=0;
        for(int j=0;j<k;j++)
        {
            if(ch[i]==temp[j])
            {
                flag=-1;
                break;
            }
        }
        if(flag==-1)
        {
            pos++;
            if(i==n-1)
                sum+=pos*(pos+1)/2;
        }
        else
        {
            sum+=pos*(pos+1)/2;
            pos=0;
        }        
    }
    cout<<sum<<endl;
    return 0;
}