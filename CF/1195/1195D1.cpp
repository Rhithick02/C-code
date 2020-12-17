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
#define mod 998244353

lli power(int i){
    lli prod=1;
    For(k,0,i) prod*=10,prod%=mod;
    return prod;
}

int main(){
    ios::sync_with_stdio(false);
    int n,dig=0;
    lli ans=0,temp=0;
    cin>>n;
    vil ar(n);
    For(i,0,n) cin>>ar[i];
    int te=ar[0];
    while(te) te/=10,dig++;
    For(i,0,2*dig){
        if(i&1){
            ans+=power(i)*(temp%mod);
            ans%=mod;
            continue;
        }
        temp=0;
        For(j,0,n) temp+=ar[j]%10,ar[j]/=10;
        temp*=n;
        ans+=power(i)*(temp%mod);
        ans%=mod;
    }
    cout<<ans<<endl;
    return 0;
}