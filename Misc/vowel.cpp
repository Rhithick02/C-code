#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long count=0;
        char ch[100000];
        cin>>ch;
        for(long k=0;k<strlen(ch);k++)
        /*{
            for(int j=i;j<strlen(ch);j++)
            {
                for(int k=i;k<=j;k++)
                {
                    if(ch[k]=='a'||ch[k]=='e'||ch[k]=='i'||ch[k]=='o'||ch[k]=='u'||ch[k]=='A'||ch[k]=='E'||ch[k]=='I'||ch[k]=='O'||ch[k]=='U')
                    count++;
                }
            }
        }*/
        {
            if(ch[k]=='a'||ch[k]=='e'||ch[k]=='i'||ch[k]=='o'||ch[k]=='u'||ch[k]=='A'||ch[k]=='E'||ch[k]=='I'||ch[k]=='O'||ch[k]=='U')
            {
                count+=(strlen(ch)-k)*(k+1);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}