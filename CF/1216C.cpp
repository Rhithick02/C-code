#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    vector<lli> x(6),y(6);
    lli ar1=0,ar2=0,ar3=0,tot;
    For(i,6) cin>>x[i]>>y[i];
    tot=abs((x[1]-x[0])*(y[1]-y[0]));
    if(x[2]<x[0]) x[2]=x[0];
    if(y[2]<y[0]) y[2]=y[0];
    if(x[3]>x[1]) x[3]=x[1];
    if(y[3]>y[1]) y[3]=y[1];
    if(x[4]<x[0]) x[4]=x[0];
    if(y[4]<y[0]) y[4]=y[0];
    if(x[5]>x[1]) x[5]=x[1];
    if(y[5]>y[1]) y[5]=y[1];    
    if(x[2]>=x[1] || x[3]<=x[0] || y[3]<=y[0] || y[2]>=y[1])
        ar1=0;
    else 
        ar1=abs((x[3]-x[2])*(y[3]-y[2]));
    if(x[4]>=x[1] || x[5]<=x[0] || y[4]>=y[1] || y[5]<=y[0])
        ar2=0;
    else
        ar2=abs((x[5]-x[4])*(y[5]-y[4]));
    if(x[3]>x[4] && y[2]<y[5] && ar1 && ar2)
    {
        if(x[3]>x[5]) x[3]=x[5];
        if(x[4]<x[2]) x[4]=x[2];
        if(y[2]<y[4]) y[2]=y[4];
        if(y[5]>y[3]) y[5]=y[3];
        ar3=abs((x[3]-x[4])*(y[5]-y[2]));
    }
    if(ar1+ar2-ar3<tot)
        cout<<"YES";
    else 
        cout<<"NO";    
    return 0;
}