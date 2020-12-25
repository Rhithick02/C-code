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
        int n,x,m,count=1,low,high;
        cin>>n>>x>>m;
        vpa ar(m);
        low=x,high=x;
        For(i,0,m) 
        {
            cin>>ar[i].fi>>ar[i].se;
            if(ar[i].fi>high || ar[i].se<low) continue;
            low=min(low,ar[i].fi);
            high=max(high,ar[i].se);
        }
        count=high-low+1;
        cout<<count<<endl;
    }
    return 0;
}