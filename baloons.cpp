#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int amber=0,brass=0;
        string baloon;
        cin>>baloon;
        for(int i=0;i<baloon.length();i++)
        {
            if(baloon[i]=='a')
            amber++;
            else 
            brass++;
        }
        if(amber>=brass)
        cout<<brass<<endl;
        else
        cout<<amber<<endl;
    }
    return 0;
}