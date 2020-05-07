#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
int main(){
    int t;
    cin>>t; 
    while(t--)
    {
        lli n,m;
        cin>>n>>m;
        if(n==1 || m==1 || n*m<=4)
            cout<<"YES";
        else 
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}