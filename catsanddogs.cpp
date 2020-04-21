#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int c,d,l;
        cin>>c>>d>>l;
        if(c/d<=2)
        {
            if(l>=4*d && l<=4*(d+c) && l%4==0)
            cout<<"yes"<<endl;
            else 
            cout<<"no"<<endl;
        }
        else
        {
            if(l>=(8*d-8*c) && l<=(4*d+4*c) && l%4==0)
            cout<<"yes"<<endl;
            else
            cout<<"no"<<endl;
        }
    }
    return 0;
}