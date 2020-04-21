#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count;
    cin>>t;
    while(t--)
    {
        count =0;
        char ch[9];
        cin>>ch;
        for(int i=0;i<9;i++)
        {
            if(ch[i]=='l'&&ch[i+3]=='l'&&ch[i+4]=='l')
            count++;
        }
        if(count!=0)
        cout<<"yes"<<endl;
        else 
        cout<<"no"<<endl;
    }
    return 0;
}