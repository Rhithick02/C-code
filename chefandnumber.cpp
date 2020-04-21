#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ctn,count=0;
        cin>>ctn;
        int scr[ctn];
        for(int i=0;i<ctn;i++)
        {
            cin>>scr[i];
            if(scr[i]<0)
            count++;
        }
        if(count==0)
        {
            cout<<ctn<<" "<<ctn<<endl;
        }
        else
        {
            if(count>ctn/2)
            cout<<count<<" "<<ctn-count<<endl;
            else
            cout<<ctn-count<<" "<<count<<endl;
        }    
    }
    return 0;
}