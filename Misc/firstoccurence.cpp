#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,count;
    char str[200];
    cin>>t;
    while(t--)
    {
        int k=1;
        count=0;
        cin>>str;
        x=strlen(str);
        char ch[x];
        ch[0]=str[0];
        for(int i=1;i<x;i++)
        {
            for(int j=0;j<k;j++)
            {
                if(ch[j]==str[i])
                    count++;
            }            
            if(count==0)
                ch[k++]=str[i];
            else 
                count=0;
        }
        for(int i=0;i<k;i++)
            cout<<ch[i];
        cout<<endl;
    }
    return 0;
}