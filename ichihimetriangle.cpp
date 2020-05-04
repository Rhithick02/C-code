#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b+c>d)
            cout<<b<<" "<<c<<" "<<d;
        else 
            cout<<b<<" "<<c<<" "<<b+c-1;
        cout<<endl;
    }
    return 0;
}