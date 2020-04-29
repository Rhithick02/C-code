#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define mod 1000000007
int main(){
    lli n,x,y,z;
    cin>>x>>y;
    if(x<0)
        x+=mod;
    if(y<0)
        y+=mod;
    cin>>n;
    z=y-x;
    if(z<0)
        z+=mod;
    if(n%6==1)
        cout<<x%mod;
    else if(n%6==2)
        cout<<y%mod;
    else if(n%6==3)
        cout<<z%mod;
    else if(n%6==4)
        cout<<(mod-x)%mod;
    else if(n%6==5)
        cout<<(mod-y)%mod;
    else 
        cout<<(mod-z)%mod;
    return 0;
}