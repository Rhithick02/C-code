#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        if(a1==0 && a2==0 && a3==0)
            break;
        else
        {
            if(a2-a1==a3-a2)
                cout<<"AP "<<2*a3-a2<<endl;
            else
                cout<<"GP "<<a3*a3/a2<<endl;
        }
    }
    return 0;
}