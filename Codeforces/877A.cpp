#include<bits/stdc++.h>
using namespace std;
#define lli long long
int substring(string s, string name, int flag)
{
    int pos=0,count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==name[pos])
        {
            pos++;
            if(pos==name.length())
            {
                pos=0;
                count++;
            }
        }
        else if(pos>=1)
        {
            i--;
            pos=0;
        }
        else
            pos=0;
    }
    return (flag+count);
}
int main(){
    string s,name[5];
    cin>>s;
    name[0]="Danil",name[1]="Olya",name[2]="Slava",name[3]="Ann",name[4]="Nikita";
    int a=0;
    for(int i=0;i<5;i++)
    {
        a=substring(s,name[i],a);
        if(a>1)
            break;
    }
    if(a==1)
        cout<<"YES";
    else 
        cout<<"NO";
        return 0;
}