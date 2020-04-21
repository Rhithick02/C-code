#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ch[1000];
        cin>>ch;
        int count=0;
        for(int i=0;ch[i]!='\0';i++)
        {
            if(ch[i]>='0'&&ch[i]<='9')
            count+=ch[i]-'0';
        }
        cout<<count<<endl;
    }
    return 0;
}