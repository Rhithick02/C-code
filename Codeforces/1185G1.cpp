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
#define mod 1000000007

lli answer(vi st,int genre, int left){
    if(!left) return 1;
    lli ans = 0;
    For(i, 0, 3) if(i!=genre && st[i]) {
        vi te = st;
        te[i]--;
        ans = (ans + st[i]*answer(te, i, left-1))%mod;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    lli ans=0;
    int n,t;
    cin>>n>>t;
    vpa ar(n);
    For(i,0,n) cin>>ar[i].fi>>ar[i].se;
    for(int i=1;i<(1<<n);i++){
        vi st(3);
        int temp=i,sum=0,count=0;
        while(temp){
            if(temp&1) sum+=ar[count].fi,st[ar[count].se-1]++;
            count++;
            temp>>=1;
        }
        if(sum!=t) continue;
        ans = (ans + answer(st, -1, st[0]+st[1]+st[2]))%mod;
    }
    cout<<ans<<endl;
    return 0;
}