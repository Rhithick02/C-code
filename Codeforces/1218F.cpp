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
    int n,k,a,fl=0;
    lli cost=0;
    cin>>n>>k;
    vi ar(n),co(n);
    For(i,0,n) cin>>ar[i];
    cin>>a;
    For(i,0,n) cin>>co[i];
    priority_queue<int,vi,greater<int>> te;
    For(i,0,n){
        te.push(co[i]);
        if(ar[i]<=k) continue;
        if(k+te.size()*a<ar[i]){
            fl=1;
            break;
        }
        while(k<ar[i]) k+=a,cost+=te.top(),te.pop();
    }
    if(fl) cout<<-1<<endl;
    else cout<<cost<<endl;
    return 0;
}