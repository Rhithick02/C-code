#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x,y,x1,x2,y1,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        if(x1==x2 && (a!=0 || b!=0) || (y1==y2 && (c!=0 || d!=0)))
            cout<<"no\n";
        else if(a-b<=x-x1 && b-a<=x2-x && c-d<=y-y1 && d-c<=y2-y)
            cout<<"yes\n";
        else 
            cout<<"no\n";
    }
    return 0;
}