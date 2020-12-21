#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,n) for(int i=0;i<n;i++)
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
    int n,m;
    cin>>n>>m;
    vi ar(m),st(n+1),pos[n+1];
    For(i,m) cin>>ar[i];
    For(i,n) 
    {
        st[i+1]=i+1;
        pos[i+1].pb(i+1);
    }
    For(i,m)
    {
        int po=pos[ar[i]][pos[ar[i]].size()-1];
        if(po<=1) continue;
        int temp=st[po];
        st[po]=st[po-1];
        st[po-1]=temp;
        pos[st[po-1]].pb(po-1);
        pos[st[po]].pb(po);
    }
    For(i,n)
    {
        cout<<*min_element(asc(pos[i+1]))<<" "<<*max_element(asc(pos[i+1]));
        cout<<endl;
    }
    return 0;
}