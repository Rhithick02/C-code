#include<bits/stdc++.h>
using namespace std;
#define lli long long
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int mo1,mo2,a,b;
        cin>>a>>b;
        if(2*a>=b && 2*b>=a && (a+b)%3==0) cout<<"yes";
        else cout<<"no";
        cout<<endl;
    }
    return 0;
}