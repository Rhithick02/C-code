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
    lli res=0;
    int n;
    cin>>n;
    vil dif(n);
    vpal ab(n);
    For(i,0,n) {
        cin>>ab[i].fi>>ab[i].se;
        dif[i]=ab[i].fi-ab[i].se;
        res+=(1LL*n*ab[i].se-ab[i].fi);
    }
    sort(des(dif));
    For(i,0,n) res+=1LL*dif[i]*(i+1);
    cout<<res<<"\n";
}