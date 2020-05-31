//incomplete
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag=0,k=0,j=0,l=0,count=0,temp=0;
        char ch[400],ch1[400],ch2[400],ch3[400];
        cin>>ch;
        for(int i=0;i<strlen(ch);i++)
        {            
            if(ch[i]=='(')
            {
                flag++;
                
            }
            if(isalpha(ch[i]))
            {
                ch1[k++]=ch[i];
            }
            if(ch[i]=='+'|| ch[i]=='*' || ch[i]=='/' || ch[i]=='-' || ch[i]=='^')
            {
                ch2[j++]=ch[i];
            }
            if(ch[i]==')')
            {
                flag--;
                if(flag==0)
                    ch1[k++]=ch2[count++];
                else
                {
                    ch3[l++]=ch[i];
                    temp++;
                }
            }
        }
        while(temp--)
            ch1[k++]=ch3[temp];

        cout<<ch1;
    }
    return 0;
}