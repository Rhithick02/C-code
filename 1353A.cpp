#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n==1) cout<<"0";
        else if(n==2) cout<<m;
        else cout<<2*m;
        cout<<endl;
    }
    return 0;
}