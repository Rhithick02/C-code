#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,red,blue,green;
        red=blue=green=0;
        cin>>n;
        char ch[n];
        for(int i=0;i<n;i++)
        {
            cin>>ch[i];
            if(ch[i]=='R')
            red++;
            else if(ch[i]=='B')
            blue++;
            else 
            green++;
        }
        if(red<=blue)
        {
            if(blue<green)
            cout<<red+blue<<endl;
            else 
            cout<<red+green<<endl;
        }
        else 
        cout<<blue+green<<endl;
    }
    return 0;
}