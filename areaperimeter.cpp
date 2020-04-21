#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,b,ar,peri;
    cin>>l>>b;
    ar=l*b;
    peri=2*(l+b);
    if(ar>peri)
    {
        cout<<"Area";
        cout<<"\n"<<ar;
    }
    else if(ar<peri)
    {
        cout<<"Peri";
        cout<<"\n"<<peri;
    }
    else
    {
        cout<<"Eq";
        cout<<"\n"<<ar;
    }
    return 0;

}