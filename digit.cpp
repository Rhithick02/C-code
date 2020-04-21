#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[18];
    int k,dig,count=0;
    cin>>ch>>k;
    dig=strlen(ch);
    for(int i=0;i<strlen(ch)&&k>0;i++,k--)    
    {
        if(ch[i]!='9')
        ch[i]='9';
        else 
        k++;
    }
    cout<<ch;
    return 0;
}