#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count;
    char str[100000];
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>str;
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                count++;
        }
        cout<<count<<endl;
    }
}