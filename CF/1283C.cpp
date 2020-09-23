#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define vi vector<int>
#define vil vector<long long>
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define pa pair<int,int>
#define pal pair<long long,long long>
#define vpa vector<pair<int,int>>
#define vpal vector<pair<long long,long long>>
#define fi first
#define se second

int main(){
    int n,k=0;
    cin>>n;
    vi ar(n,0),ans(n+1,-1),recieve,send;
    For(i,0,n) 
    {
        cin>>ar[i];
        if(ar[i]) ans[ar[i]]=0;
        else send.pb(i+1);
    }
    For(i,1,n+1) if(ans[i]==-1) recieve.pb(i);
    For(i,0,send.size())
    {
        if(send[i]!=recieve[i]) continue;
        else swap(recieve[i],recieve[(i+1)%send.size()]);
    }
    For(i,0,n)
    {
        if(ar[i]) cout<<ar[i]<<" ";
        else cout<<recieve[k++]<<" ";
    }
    cout<<endl;
    return 0;
}