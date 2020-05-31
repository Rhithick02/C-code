#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        float b,g;
        float temp=0;
        cin>>g>>b;
        if(b==-1 && g==-1)
            break;
        if(b==1)
            temp=g/2;
        else if(g==1)
            temp=b/2;
        if(temp!=0)
        {
            if(temp>int(temp))
                cout<<int(temp)+1<<endl;
            else
                cout<<int(temp)<<endl;
        }
        else
        {
            cout<<int((b+g)/(min(b,g)+1))<<endl;
        }            
    }
    return 0;
    
}