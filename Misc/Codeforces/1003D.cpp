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
    int n,q,x;
    cin>>n>>q;
    vi ar(n),st(32);
    For(i,0,n) cin>>ar[i],st[log2(ar[i])]++;
    For(i,0,q){
        cin>>x;
        int cnt=0;
        for(int i=31;i>=0;i--){
            int temp = min(st[i],x/(1<<i));
            x -= temp*(1<<i);
            cnt += temp;
        }
        if(!x) cout<<cnt<<"\n";
        else cout<<"-1\n";
    }
}