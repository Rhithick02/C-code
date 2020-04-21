#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x%2==0)
        {
            if(y==x || y==x-2)
                cout<<x+y<<endl;
            else
                cout<<"No Number\n";
        }
        else 
        {
            if(y==x || y==x-2)
                cout<<x+y-1<<endl;
            else
                cout<<"No Number\n";
        }
    }
    return 0;
}