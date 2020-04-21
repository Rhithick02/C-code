#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count;
    cin>>t;
    while(t--)
    {
        count=0;
        int time;
        for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
        {
            cin>>time;
            if(time<=30)
            count++;
        }
        if(count>=60)
        cout<<"yes\n";
        else 
        cout<<"no\n";
    }
    return 0;
}