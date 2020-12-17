#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    double r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    double distance=sqrt((x-x1)*(x-x1) + (y-y1)*(y-y1));
    cout<<distance<<endl;
    cout<<ceil(abs(distance/(2.0*r)));
    return 0;
}