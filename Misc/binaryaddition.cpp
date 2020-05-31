#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2,str3;
    int a,carry=0,b,c;
    cin>>str1>>str2;
    a=min(str1.length(),str2.length());
    if(str1.length()>str2.length())
        b=str1.length();
    else 
        c=str2.length();
    for(int i=max(str1.length(),str2.length())-1,j=a-1;i>=max(str1.length(),str2.length())-a,j>=0;i--,j--)
    {
        if(carry==0)
        {
            if(str1[i]=='1' && str2[j]=='1')
            {
                str3[i]='0';
                carry=1;
            }
            else if(str1[i]=='0' && str2[j]=='0')
                str3[i]='0';
            else 
                str3[i]='1';
        }
        else
        {
            if(str1[i]=='1' && str2[j]=='1')
                str3[i]='1';            
            else if(str1[i]=='0' && str2[j]=='0')
            {
                str3[i]='1';
                carry=0;
            }
            else
                str3[i]='0';            
        }
    }
    for(int i=max(str1.length(),str2.length())-a-1;i>=0;i--)
    {
        if(carry==1)
        {
            if(str1[i]=='1')
                str3[i]=='0';
            else
            {
                str3[i]=='1';
                carry=0;
            }                
        }
        else
        {
            if(str1[i]=='1')
                str3[i]=='1';
            else
            {
                str3[i]=='0';
                
            }
        }
        
    }
    for(int i=0;i<str3.length();i++)
    cout<<str3[i];
    return 0;    
}