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
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,count=0;
        cin>>n>>m;
        vector<vi> ar(n,vi(m)),te(m+n-1);
        For(i,0,n) For(j,0,m) cin>>ar[i][j];
        For(i,0,n) For(j,0,m) te[min((i+j),(n+m-2-i-j))].pb(ar[i][j]);
        int size=(n+m-2)/2;
        if((n+m)&1) size++;
        For(i,0,size)
        {
            int one=0,zer=0;
            for(auto it: te[i]) (it==1? one:zer)++;
            count+=min(zer,one);
        }
        cout<<count<<endl;
    }
    return 0;
}