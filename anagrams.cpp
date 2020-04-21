#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[10000],b[10000];
        cin>>a;
        cin>>b;
        int count1[26],count2[26],temp,sum=0;
        for(int i=0;i<26;i++)
        count1[i]=count2[i]=0;
        for(int i=0;i<strlen(a);i++)
        {
            temp=a[i];
            count1[temp-97]++;
        }
        for(int j=0;j<strlen(b);j++)
        {
            temp=b[j];
            count2[temp-97]++;
        }
        for(int k=0;k<26;k++)
        {
            if(count1[k]!=count2[k])
            {
                if(count1[k]>count2[k])
                sum+=count1[k]-count2[k];
                else 
                sum+=count2[k]-count1[k];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}