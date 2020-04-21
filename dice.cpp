#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100000];
    int count,i;
    cin>>ch;
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]!='6')
        count++;
    }
    if(ch[i-1]=='6')
        cout<<"-1";
    else
        cout<<count;

}