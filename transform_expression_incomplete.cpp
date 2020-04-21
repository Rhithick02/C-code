//incomplete
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag=0,k=0,j=0,count=0,l=0;
        char ch[400],ch1[400],ch2[400],ch3;
        cin>>ch;
        for(int i=0;i<strlen(ch);i++)
        {            
            if(ch[i]=='(')
            {
                flag++;
                
            }
            else if(isalpha(ch[i]))
            {
                ch1[k++]=ch[i];
            }
            else if(ch[i]=='+'|| ch[i]=='*' || ch[i]=='/' || ch[i]=='-' || ch[i]=='^')
            {
                if(ch[i+1]!='(')
                    ch2[j++]=ch[i];
                else
                    ch3=ch[i];
            }
            else if(ch[i]==')')
            {
                flag--;
                ch1[k++]=ch2[count++];
            }
        }
        ch1[k]=ch3;
        for(int i=0;i<strlen(ch1);i++)
            cout<<ch1[i];
    }
    return 0;
}