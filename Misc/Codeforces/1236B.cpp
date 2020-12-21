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

int main(){
    ios::sync_with_stdio(false);
    lli n,m,prod[2]={1,1},res=2;
    cin>>n>>m;
    while(m>0){
        if(m&1) prod[0]=((prod[0]%mod)*(res%mod))%mod;
        m=m>>1;
        res=((res%mod)*(res%mod))%mod;
    }
    res=prod[0]-1;
    while(n>0){
        if(n&1) prod[1]=((prod[1]%mod)*(res%mod))%mod;
        n=n>>1;
        res=((res%mod)*(res%mod))%mod;
    }
    cout<<prod[1]%mod<<endl;
    return 0;
}