#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string st;
        int countz=0,counto=0;
        cin>>st;
        for(int i=0;i<st.length();i++)
        {
            if(st[i]=='1')
            counto++;
            else 
            countz++;
        }
        if(counto==1||countz==1)
        cout<<"Yes"<<endl;
        else 
        cout<<"No"<<endl;
    }
    return 0;
}