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
    ios::sync_with_stdio(false);
    lli length=0,res=0;
    multiset<lli> te;
    int n,k;
    cin>>n>>k;
    vpal ar(n);
    For(i,0,n) cin>>ar[i].se>>ar[i].fi;
    sort(des(ar));
    For(i,0,n){
        te.insert(ar[i].se);
        length+=ar[i].se;
        while(te.size()>k){
            length-=*te.begin();
            te.erase(te.begin());
        }
        res=max(res,length*ar[i].fi);
    }
    cout<<res<<"\n";
}