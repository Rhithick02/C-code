#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,u,v,lvl=0;
        cin>>n>>x;
        For(i,n-1)
        {
            cin>>u>>v;
            if(u==x || v==x) lvl++;
        }
        if(lvl<=1) cout<<"Ayush";
        else if((n-2)&1) cout<<"Ashish";
        else cout<<"Ayush";
        cout<<endl;
    }
    return 0;
}